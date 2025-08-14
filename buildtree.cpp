#include <iostream>
#include <vector>
using namespace std;

// Definition of BST Node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class BST {
private:
    TreeNode* root;
    
    // Helper function to build BST from sorted array recursively
    TreeNode* sortedArrayToBSTHelper(vector<int>& nums, int left, int right) {
        // Base case
        if (left > right) {
            return nullptr;
        }
        
        // Choose middle element as root to maintain balance
        int mid = left + (right - left) / 2;
        TreeNode* node = new TreeNode(nums[mid]);
        
        // Recursively build left and right subtrees
        node->left = sortedArrayToBSTHelper(nums, left, mid - 1);
        node->right = sortedArrayToBSTHelper(nums, mid + 1, right);
        
        return node;
    }
    
    // Helper function for inorder traversal
    void inorderHelper(TreeNode* node) {
        if (node == nullptr) return;
        
        inorderHelper(node->left);
        cout << node->val << " ";
        inorderHelper(node->right);
    }
    
    // Helper function for preorder traversal
    void preorderHelper(TreeNode* node) {
        if (node == nullptr) return;
        
        cout << node->val << " ";
        preorderHelper(node->left);
        preorderHelper(node->right);
    }
    
    // Helper function to calculate height
    int heightHelper(TreeNode* node) {
        if (node == nullptr) return 0;
        
        int leftHeight = heightHelper(node->left);
        int rightHeight = heightHelper(node->right);
        
        return 1 + max(leftHeight, rightHeight);
    }
    
    // Helper function to search
    TreeNode* searchHelper(TreeNode* node, int target) {
        if (node == nullptr || node->val == target) {
            return node;
        }
        
        if (target < node->val) {
            return searchHelper(node->left, target);
        } else {
            return searchHelper(node->right, target);
        }
    }

public:
    BST() : root(nullptr) {}
    
    // Build BST from sorted array
    void buildFromSortedArray(vector<int>& nums) {
        if (nums.empty()) {
            root = nullptr;
            return;
        }
        root = sortedArrayToBSTHelper(nums, 0, nums.size() - 1);
    }
    
    // Public interface for traversals
    void inorderTraversal() {
        cout << "Inorder traversal: ";
        inorderHelper(root);
        cout << endl;
    }
    
    void preorderTraversal() {
        cout << "Preorder traversal: ";
        preorderHelper(root);
        cout << endl;
    }
    
    // Get height of BST
    int getHeight() {
        return heightHelper(root);
    }
    
    // Search for a value
    bool search(int target) {
        return searchHelper(root, target) != nullptr;
    }
    
    // Get root value
    int getRootValue() {
        return root ? root->val : -1;
    }
    
    // Check if BST is empty
    bool isEmpty() {
        return root == nullptr;
    }
};

int main() {
    // Example 1: Build BST from sorted array
    vector<int> sortedArray1 = {1, 3, 5, 7, 9, 11, 13};
    BST bst1;
    
    cout << "Building BST from sorted array: ";
    for (int num : sortedArray1) {
        cout << num << " ";
    }
    cout << endl << endl;
    
    bst1.buildFromSortedArray(sortedArray1);
    
    cout << "Root value: " << bst1.getRootValue() << endl;
    cout << "Height of BST: " << bst1.getHeight() << endl;
    
    bst1.inorderTraversal();
    bst1.preorderTraversal();
    
    // Test search functionality
    cout << "\nSearch results:" << endl;
    cout << "Search for 7: " << (bst1.search(7) ? "Found" : "Not found") << endl;
    cout << "Search for 10: " << (bst1.search(10) ? "Found" : "Not found") << endl;
    
    cout << "\n" << string(50, '-') << "\n" << endl;
    
    // Example 2: Another sorted array
    vector<int> sortedArray2 = {10, 20, 30, 40, 50, 60};
    BST bst2;
    
    cout << "Building BST from sorted array: ";
    for (int num : sortedArray2) {
        cout << num << " ";
    }
    cout << endl << endl;
    
    bst2.buildFromSortedArray(sortedArray2);
    
    cout << "Root value: " << bst2.getRootValue() << endl;
    cout << "Height of BST: " << bst2.getHeight() << endl;
    
    bst2.inorderTraversal();
    bst2.preorderTraversal();
    
    // Example 3: Edge cases
    cout << "\n" << string(50, '-') << "\n" << endl;
    
    // Empty array
    vector<int> emptyArray;
    BST bst3;
    bst3.buildFromSortedArray(emptyArray);
    cout << "Empty array BST - Is empty: " << (bst3.isEmpty() ? "Yes" : "No") << endl;
    
    // Single element
    vector<int> singleElement = {42};
    BST bst4;
    bst4.buildFromSortedArray(singleElement);
    cout << "Single element BST - Root: " << bst4.getRootValue() << endl;
    cout << "Single element BST - Height: " << bst4.getHeight() << endl;
    bst4.inorderTraversal();
    
    return 0;
}







#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class SegmentTree {
private:
    vector<int> tree;      // Segment tree array
    vector<int> original;  // Original array
    int n;                 // Size of original array
    
    // Build segment tree recursively
    void buildTree(int node, int start, int end) {
        if (start == end) {
            // Leaf node
            tree[node] = original[start];
        } else {
            int mid = (start + end) / 2;
            int leftChild = 2 * node;
            int rightChild = 2 * node + 1;
           
            // Build left and right subtrees
            buildTree(leftChild, start, mid);
            buildTree(rightChild, mid + 1, end);
            
            // Internal node stores sum of its children
            tree[node] = tree[leftChild] + tree[rightChild];
        }
    }
    
    // Range sum query helper
    int rangeQueryHelper(int node, int start, int end, int l, int r) {
        if (r < start || end < l) {
            // Range represented by node is completely outside [l, r]
            return 0;
        }
        if (l <= start && end <= r) {
            // Range represented by node is completely inside [l, r]
            return tree[node];
        }
        
        // Range represented by node is partially inside and outside [l, r]
        int mid = (start + end) / 2;
        int leftChild = 2 * node;
        int rightChild = 2 * node + 1;
        
        int p1 = rangeQueryHelper(leftChild, start, mid, l, r);
        int p2 = rangeQueryHelper(rightChild, mid + 1, end, l, r);
        
        return p1 + p2;
    }
    
    // Range minimum query helper
    int rangeMinHelper(int node, int start, int end, int l, int r) {
        if (r < start || end < l) {
            return INT_MAX;
        }
        if (l <= start && end <= r) {
            return tree[node];
        }
        
        int mid = (start + end) / 2;
        int leftChild = 2 * node;
        int rightChild = 2 * node + 1;
        
        int p1 = rangeMinHelper(leftChild, start, mid, l, r);
        int p2 = rangeMinHelper(rightChild, mid + 1, end, l, r);
        
        return min(p1, p2);
    }
    
    // Update helper
    void updateHelper(int node, int start, int end, int idx, int val) {
        if (start == end) {
            // Leaf node
            original[idx] = val;
            tree[node] = val;
        } else {
            int mid = (start + end) / 2;
            int leftChild = 2 * node;
            int rightChild = 2 * node + 1;
            
            if (idx <= mid) {
                updateHelper(leftChild, start, mid, idx, val);
            } else {
                updateHelper(rightChild, mid + 1, end, idx, val);
            }
            
            // Update current node
            tree[node] = tree[leftChild] + tree[rightChild];
        }
    }
    
    // Print tree structure helper
    void printTreeHelper(int node, int start, int end, int depth) {
        if (node >= tree.size()) return;
        
        string indent = string(depth * 4, ' ');
        
        if (start == end) {
            cout << indent << "Leaf[" << start << "]: " << tree[node] << endl;
        } else {
            cout << indent << "Node[" << start << "-" << end << "]: " << tree[node] << endl;
            int mid = (start + end) / 2;
            printTreeHelper(2 * node, start, mid, depth + 1);
            printTreeHelper(2 * node + 1, mid + 1, end, depth + 1);
        }
    }

public:
    // Constructor - build segment tree from array
    SegmentTree(vector<int>& arr) {
        n = arr.size();
        original = arr;
        tree.resize(4 * n);  // Segment tree needs at most 4*n space
        
        if (n > 0) {
            buildTree(1, 0, n - 1);  // Start from node 1, range [0, n-1]
        }
    }
    
    // Range sum query [l, r] (0-indexed)
    int rangeSum(int l, int r) {
        if (l < 0 || r >= n || l > r) {
            cout << "Invalid range!" << endl;
            return 0;
        }
        return rangeQueryHelper(1, 0, n - 1, l, r);
    }
    
    // Point update - change arr[idx] to val
    void update(int idx, int val) {
        if (idx < 0 || idx >= n) {
            cout << "Invalid index!" << endl;
            return;
        }
        updateHelper(1, 0, n - 1, idx, val);
    }
    
    // Get original array
    void printOriginalArray() {
        cout << "Original array: ";
        for (int i = 0; i < n; i++) {
            cout << original[i] << " ";
        }
        cout << endl;
    }
    
    // Print segment tree structure
    void printTree() {
        cout << "\nSegment Tree Structure:" << endl;
        cout << string(40, '-') << endl;
        if (n > 0) {
            printTreeHelper(1, 0, n - 1, 0);
        } else {
            cout << "Empty tree" << endl;
        }
        cout << string(40, '-') << endl;
    }
    
    // Get size
    int size() {
        return n;
    }
    
    // Check if empty
    bool isEmpty() {
        return n == 0;
    }
};

// Specialized Segment Tree for Range Minimum Queries
class RangeMinSegmentTree {
private:
    vector<int> tree;
    vector<int> original;
    int n;
    
    void buildTree(int node, int start, int end) {
        if (start == end) {
            tree[node] = original[start];
        } else {
            int mid = (start + end) / 2;
            buildTree(2 * node, start, mid);
            buildTree(2 * node + 1, mid + 1, end);
            tree[node] = min(tree[2 * node], tree[2 * node + 1]);
        }
    }
    
    int rangeMinHelper(int node, int start, int end, int l, int r) {
        if (r < start || end < l) {
            return INT_MAX;
        }
        if (l <= start && end <= r) {
            return tree[node];
        }
        
        int mid = (start + end) / 2;
        int p1 = rangeMinHelper(2 * node, start, mid, l, r);
        int p2 = rangeMinHelper(2 * node + 1, mid + 1, end, l, r);
        return min(p1, p2);
    }

public:
    RangeMinSegmentTree(vector<int>& arr) {
        n = arr.size();
        original = arr;
        tree.resize(4 * n);
        if (n > 0) {
            buildTree(1, 0, n - 1);
        }
    }
    
    int rangeMin(int l, int r) {
        if (l < 0 || r >= n || l > r) {
            return INT_MAX;
        }
        return rangeMinHelper(1, 0, n - 1, l, r);
    }
};

int main() {
    // Example 1: Build segment tree from sorted array
    vector<int> sortedArray1 = {1, 3, 5, 7, 9, 11, 13};
    
    cout << "=== SEGMENT TREE EXAMPLE 1 ===" << endl;
    cout << "Building Segment Tree from sorted array: ";
    for (int num : sortedArray1) {
        cout << num << " ";
    }
    cout << endl;
    
    SegmentTree st1(sortedArray1);
    st1.printOriginalArray();
    st1.printTree();
    
    // Range sum queries
    cout << "\n=== RANGE SUM QUERIES ===" << endl;
    cout << "Sum of range [0, 2]: " << st1.rangeSum(0, 2) << endl;  // 1+3+5 = 9
    cout << "Sum of range [1, 4]: " << st1.rangeSum(1, 4) << endl;  // 3+5+7+9 = 24
    cout << "Sum of range [3, 6]: " << st1.rangeSum(3, 6) << endl;  // 7+9+11+13 = 40
    cout << "Sum of entire array [0, 6]: " << st1.rangeSum(0, 6) << endl;  // Total sum
    
    // Update operations
    cout << "\n=== UPDATE OPERATIONS ===" << endl;
    cout << "Updating index 3 from 7 to 15" << endl;
    st1.update(3, 15);
    st1.printOriginalArray();
    
    cout << "Sum of range [1, 4] after update: " << st1.rangeSum(1, 4) << endl;  // 3+5+15+9 = 32
    cout << "Sum of entire array after update: " << st1.rangeSum(0, 6) << endl;
    
    cout << "\n" << string(60, '=') << "\n" << endl;
    
    // Example 2: Range Minimum Queries
    vector<int> sortedArray2 = {2, 5, 8, 12, 16, 20, 25};
    
    cout << "=== RANGE MINIMUM SEGMENT TREE ===" << endl;
    cout << "Array: ";
    for (int num : sortedArray2) {
        cout << num << " ";
    }
    cout << endl;
    
    RangeMinSegmentTree rmst(sortedArray2);
    
    cout << "\n=== RANGE MINIMUM QUERIES ===" << endl;
    cout << "Min in range [0, 2]: " << rmst.rangeMin(0, 2) << endl;    // min(2,5,8) = 2
    cout << "Min in range [1, 4]: " << rmst.rangeMin(1, 4) << endl;    // min(5,8,12,16) = 5
    cout << "Min in range [3, 6]: " << rmst.rangeMin(3, 6) << endl;    // min(12,16,20,25) = 12
    cout << "Min in entire array [0, 6]: " << rmst.rangeMin(0, 6) << endl;  // min of all = 2
    
    cout << "\n" << string(60, '=') << "\n" << endl;
    
    // Example 3: Edge cases
    cout << "=== EDGE CASES ===" << endl;
    
    // Single element
    vector<int> single = {42};
    SegmentTree st_single(single);
    cout << "Single element array: " << st_single.rangeSum(0, 0) << endl;
    
    // Two elements
    vector<int> two = {10, 20};
    SegmentTree st_two(two);
    cout << "Two elements - sum [0,1]: " << st_two.rangeSum(0, 1) << endl;
    cout << "Two elements - sum [0,0]: " << st_two.rangeSum(0, 0) << endl;
    
    // Empty array
    vector<int> empty;
    SegmentTree st_empty(empty);
    cout << "Empty array - is empty: " << (st_empty.isEmpty() ? "Yes" : "No") << endl;
    
    return 0;
}










#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

class Heap {
private:
    vector<int> heap;
    bool isMaxHeap;
    
    // Get parent index
    int parent(int i) {
        return (i - 1) / 2;
    }
    
    // Get left child index
    int leftChild(int i) {
        return 2 * i + 1;
    }
    
    // Get right child index
    int rightChild(int i) {
        return 2 * i + 2;
    }
    
    // Max heapify - maintain max heap property
    void maxHeapify(int i) {
        int left = leftChild(i);
        int right = rightChild(i);
        int largest = i;
        
        // Find largest among root, left child and right child
        if (left < heap.size() && heap[left] > heap[largest]) {
            largest = left;
        }
        
        if (right < heap.size() && heap[right] > heap[largest]) {
            largest = right;
        }
        
        // If largest is not root, swap and continue heapifying
        if (largest != i) {
            swap(heap[i], heap[largest]);
            maxHeapify(largest);
        }
    }
    
    // Min heapify - maintain min heap property
    void minHeapify(int i) {
        int left = leftChild(i);
        int right = rightChild(i);
        int smallest = i;
        
        // Find smallest among root, left child and right child
        if (left < heap.size() && heap[left] < heap[smallest]) {
            smallest = left;
        }
        
        if (right < heap.size() && heap[right] < heap[smallest]) {
            smallest = right;
        }
        
        // If smallest is not root, swap and continue heapifying
        if (smallest != i) {
            swap(heap[i], heap[smallest]);
            minHeapify(smallest);
        }
    }
    
    // Heapify up - used for insertion
    void heapifyUp(int i) {
        if (i && ((isMaxHeap && heap[parent(i)] < heap[i]) || 
                 (!isMaxHeap && heap[parent(i)] > heap[i]))) {
            swap(heap[i], heap[parent(i)]);
            heapifyUp(parent(i));
        }
    }
    
    // Print tree structure helper
    void printTreeHelper(int index, int depth, string prefix) {
        if (index >= heap.size()) return;
        
        if (rightChild(index) < heap.size()) {
            printTreeHelper(rightChild(index), depth + 1, prefix + "    ");
        }
        
        cout << prefix << "+-- " << heap[index] << endl;
        
        if (leftChild(index) < heap.size()) {
            printTreeHelper(leftChild(index), depth + 1, prefix + "    ");
        }
    }

public:
    // Constructor
    Heap(bool maxHeap = true) : isMaxHeap(maxHeap) {}
    
    // Build heap from array using heapify (bottom-up approach)
    void buildHeap(vector<int>& arr, bool maxHeap = true) {
        isMaxHeap = maxHeap;
        heap = arr;
        
        // Start from last non-leaf node and heapify all nodes
        for (int i = heap.size() / 2 - 1; i >= 0; i--) {
            if (isMaxHeap) {
                maxHeapify(i);
            } else {
                minHeapify(i);
            }
        }
    }
    
    // Insert element
    void insert(int key) {
        heap.push_back(key);
        int index = heap.size() - 1;
        heapifyUp(index);
    }
    
    // Extract root (max in max heap, min in min heap)
    int extractRoot() {
        if (heap.empty()) {
            cout << "Heap is empty!" << endl;
            return -1;
        }
        
        if (heap.size() == 1) {
            int root = heap[0];
            heap.pop_back();
            return root;
        }
        
        // Store root value
        int root = heap[0];
        
        // Move last element to root and reduce heap size
        heap[0] = heap.back();
        heap.pop_back();
        
        // Heapify root
        if (isMaxHeap) {
            maxHeapify(0);
        } else {
            minHeapify(0);
        }
        
        return root;
    }
    
    // Peek root element
    int peek() {
        if (heap.empty()) {
            cout << "Heap is empty!" << endl;
            return -1;
        }
        return heap[0];
    }
    
    // Delete element at index
    void deleteAt(int i) {
        if (i >= heap.size()) {
            cout << "Index out of bounds!" << endl;
            return;
        }
        
        // Replace with last element
        heap[i] = heap.back();
        heap.pop_back();
        
        // Heapify to maintain heap property
        if (isMaxHeap) {
            maxHeapify(i);
        } else {
            minHeapify(i);
        }
    }
    
    // Get size
    int size() {
        return heap.size();
    }
    
    // Check if empty
    bool isEmpty() {
        return heap.empty();
    }
    
    // Print heap array
    void printArray() {
        cout << (isMaxHeap ? "Max" : "Min") << " Heap array: ";
        for (int i = 0; i < heap.size(); i++) {
            cout << heap[i] << " ";
        }
        cout << endl;
    }
    
    // Print heap as tree structure
    void printTree() {
        cout << "\n" << (isMaxHeap ? "Max" : "Min") << " Heap Tree Structure:" << endl;
        cout << string(30, '-') << endl;
        if (!heap.empty()) {
            printTreeHelper(0, 0, "");
        } else {
            cout << "Empty heap" << endl;
        }
        cout << string(30, '-') << endl;
    }
    
    // Get heap array (for external access)
    vector<int> getHeapArray() {
        return heap;
    }
    
    // Heap sort
    vector<int> heapSort() {
        vector<int> original = heap;
        vector<int> sorted;
        
        // Extract elements one by one
        while (!heap.empty()) {
            sorted.push_back(extractRoot());
        }
        
        // Restore original heap
        heap = original;
        
        // For max heap, we get descending order, so reverse for ascending
        if (isMaxHeap) {
            reverse(sorted.begin(), sorted.end());
        }
        
        return sorted;
    }
    
    // Verify heap property
    bool isValidHeap() {
        for (int i = 0; i < heap.size(); i++) {
            int left = leftChild(i);
            int right = rightChild(i);
            
            if (isMaxHeap) {
                if ((left < heap.size() && heap[i] < heap[left]) ||
                    (right < heap.size() && heap[i] < heap[right])) {
                    return false;
                }
            } else {
                if ((left < heap.size() && heap[i] > heap[left]) ||
                    (right < heap.size() && heap[i] > heap[right])) {
                    return false;
                }
            }
        }
        return true;
    }
};

// Priority Queue implementation using heap
class PriorityQueue {
private:
    Heap heap;

public:
    PriorityQueue(bool maxPriority = true) : heap(maxPriority) {}
    
    void enqueue(int priority) {
        heap.insert(priority);
    }
    
    int dequeue() {
        return heap.extractRoot();
    }
    
    int top() {
        return heap.peek();
    }
    
    bool empty() {
        return heap.isEmpty();
    }
    
    int size() {
        return heap.size();
    }
    
    void display() {
        heap.printArray();
    }
};

int main() {
    // Example 1: Build Max Heap from sorted array
    vector<int> sortedArray1 = {1, 3, 5, 7, 9, 11, 13, 15};
    
    cout << "=== MAX HEAP FROM SORTED ARRAY ===" << endl;
    cout << "Original sorted array: ";
    for (int num : sortedArray1) {
        cout << num << " ";
    }
    cout << endl;
    
    Heap maxHeap;
    maxHeap.buildHeap(sortedArray1, true);  // Build max heap
    
    maxHeap.printArray();
    maxHeap.printTree();
    
    cout << "Is valid max heap: " << (maxHeap.isValidHeap() ? "Yes" : "No") << endl;
    cout << "Root (max element): " << maxHeap.peek() << endl;
    
    cout << "\n=== HEAP OPERATIONS ===" << endl;
    cout << "Extracting root: " << maxHeap.extractRoot() << endl;
    maxHeap.printArray();
    
    cout << "Inserting 20: ";
    maxHeap.insert(20);
    maxHeap.printArray();
    maxHeap.printTree();
    
    cout << "\n" << string(50, '=') << "\n" << endl;
    
    // Example 2: Build Min Heap from sorted array
    vector<int> sortedArray2 = {2, 4, 6, 8, 10, 12, 14};
    
    cout << "=== MIN HEAP FROM SORTED ARRAY ===" << endl;
    cout << "Original sorted array: ";
    for (int num : sortedArray2) {
        cout << num << " ";
    }
    cout << endl;
    
    Heap minHeap;
    minHeap.buildHeap(sortedArray2, false);  // Build min heap
    
    minHeap.printArray();
    minHeap.printTree();
    
    cout << "Is valid min heap: " << (minHeap.isValidHeap() ? "Yes" : "No") << endl;
    cout << "Root (min element): " << minHeap.peek() << endl;
    
    cout << "\n=== HEAP SORT DEMONSTRATION ===" << endl;
    vector<int> sorted = minHeap.heapSort();
    cout << "Sorted array using heap sort: ";
    for (int num : sorted) {
        cout << num << " ";
    }
    cout << endl;
    
    cout << "\n" << string(50, '=') << "\n" << endl;
    
    // Example 3: Priority Queue using Heap
    cout << "=== PRIORITY QUEUE DEMONSTRATION ===" << endl;
    
    PriorityQueue pq(true);  // Max priority queue
    
    vector<int> priorities = {3, 7, 1, 9, 4, 6};
    cout << "Inserting priorities: ";
    for (int p : priorities) {
        cout << p << " ";
        pq.enqueue(p);
    }
    cout << endl;
    
    pq.display();
    
    cout << "Dequeuing in priority order: ";
    while (!pq.empty()) {
        cout << pq.dequeue() << " ";
    }
    cout << endl;
    
    cout << "\n" << string(50, '=') << "\n" << endl;
    
    // Example 4: Heapify comparison
    cout << "=== HEAPIFY TIME COMPARISON ===" << endl;
    
    vector<int> largeArray;
    for (int i = 1; i <= 1000; i++) {
        largeArray.push_back(i);
    }
    
    // Method 1: Build heap using heapify (O(n))
    Heap heap1;
    auto start = chrono::high_resolution_clock::now();
    heap1.buildHeap(largeArray, true);
    auto end = chrono::high_resolution_clock::now();
    auto duration1 = chrono::duration_cast<chrono::microseconds>(end - start);
    
    // Method 2: Build heap using repeated insertion (O(n log n))
    Heap heap2;
    start = chrono::high_resolution_clock::now();
    for (int val : largeArray) {
        heap2.insert(val);
    }
    end = chrono::high_resolution_clock::now();
    auto duration2 = chrono::duration_cast<chrono::microseconds>(end - start);
    
    cout << "Array size: " << largeArray.size() << " elements" << endl;
    cout << "Heapify method (O(n)): " << duration1.count() << " microseconds" << endl;
    cout << "Insertion method (O(n log n)): " << duration2.count() << " microseconds" << endl;
    cout << "Speedup: " << (double)duration2.count() / duration1.count() << "x faster" << endl;
    
    cout << "\n=== EDGE CASES ===" << endl;
    
    // Single element
    vector<int> single = {42};
    Heap singleHeap;
    singleHeap.buildHeap(single);
    cout << "Single element heap: ";
    singleHeap.printArray();
    
    // Two elements
    vector<int> two = {5, 3};
    Heap twoHeap;
    twoHeap.buildHeap(two, true);
    cout << "Two elements max heap: ";
    twoHeap.printArray();
    
    // Empty heap
    Heap emptyHeap;
    cout << "Empty heap size: " << emptyHeap.size() << endl;
    
    return 0;
}
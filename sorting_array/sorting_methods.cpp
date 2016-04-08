#include<iostream>

using namespace std;
void bubble_sort(int bubble[], int N);
void selection_sort(int insert[], int N);
void heap_sort(int heap[], int N);

int main() {

	int const N = 10;
	int insert[N] = {};
	for (int i = 0; i < N; i++) {
		insert[i] = rand() % 15;
	}
	cout << "\nrandomly generated array: \n";
	for (int i = 0; i < N; i++) {
		cout << insert[i] << " " ;
	}
	int bubble[N] = {};
	int heap[N] = {};
	memcpy(bubble, insert, sizeof(insert));
	memcpy(heap, insert, sizeof(insert));

	selection_sort(insert, N);
	bubble_sort(bubble, N);
	heap_sort(heap, N);
	cout << "\n";
	system("pause");
	return 0;
}

void bubble_sort(int a[], int N) {
	// complexity O(n^2)
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N-1; j++) {

			// if a[j+1] > a[j] swap them
			if (a[j] > a[j + 1]) {
				int temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}

		cout << "\narray after one iteration of bubble sort: \n";
		for (int i = 0; i < N; i++) {
			cout << a[i] << " ";
		}
		cout << "\n";

	}
	cout << "\n\narray after bubble sort: \n";
	for (int i = 0; i < N; i++) {
		cout << a[i] << " ";
	}

	cout << endl;
}


void selection_sort(int a[], int N) {
	// complexity O(n^2)
	for (int i = 0; i < N; i++) {
		int min = i;
		for (int j = i ; j < N ; j++) {

			if (a[min] > a[j]) {
				min = j;
			}

		}

		int temp = a[i];
		a[i] = a[min];
		a[min] = temp;

		cout << "\narray after one iteration of selection sort: \n";
		for (int i = 0; i < N; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}

	cout << "\n\narray after selection sort: \n";
	for (int i = 0; i < N; i++) {
		cout << a[i] << " ";
	}

}


// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int a[], int n, int i)
{
	int largest = i;  // Initialize largest as root
	int l = 2 * i + 1;  // left = 2*i + 1
	int r = 2 * i + 2;  // right = 2*i + 2
	// If left child is larger than root
	if (l < n && a[l] > a[largest])
		largest = l;
	// If right child is larger than largest so far
	if (r < n && a[r] > a[largest])
		largest = r;
	// If largest is not root
	if (largest != i)
	{
		swap(a[i], a[largest]);

		// Recursively heapify the affected sub-tree
		heapify(a, n, largest);
	}
}

// main function to do heap sort
void heap_sort(int a[], int n)
{
	// Build heap (rearrange array)
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(a, n, i);

	// One by one extract an element from heap
	for (int i = n - 1; i >= 0; i--)
	{
		// Move current root to end
		swap(a[0], a[i]);

		// call max heapify on the reduced heap
		heapify(a, i, 0);
	}
	cout << "\narray after heap sort: \n";
	for (int i = 0; i<n; ++i)
		cout << a[i] << " ";
	cout << "\n";
}
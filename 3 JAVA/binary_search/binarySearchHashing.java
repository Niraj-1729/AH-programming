public class binarySearchHashing {
    private static final int TABLE_SIZE = 10;
    private int[] table;

    public binarySearchHashing() {
        table = new int[TABLE_SIZE];
    }

    // Hashing function
    private int hash(int key) {
        return key % TABLE_SIZE;
    }

    // Insert a value into the hash table
    public void insert(int value) {
        int index = hash(value);
        if (table[index] == 0) {
            table[index] = value;
        } else {
            // Handle collision using binary search
            int low = index;
            int high = TABLE_SIZE - 1;
            while (low <= high) {
                int mid = (low + high) / 2;
                if (table[mid] == 0) {
                    table[mid] = value;
                    break;
                } else if (value < table[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
        }
    }

    // Search for a value in the hash table
    public boolean search(int value) {
        int index = hash(value);
        if (table[index] == value) {
            return true;
        } else {
            // Perform binary search for the value in the collision chain
            int low = index;
            int high = TABLE_SIZE - 1;
            while (low <= high) {
                int mid = (low + high) / 2;
                if (table[mid] == value) {
                    return true;
                } else if (value < table[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            return false;
        }
    }

    public static void main(String[] args) {
        binarySearchHashing hashTable = new binarySearchHashing();

        int[] values = {12, 25, 36, 8, 14, 7};
        for (int value : values) {
            hashTable.insert(value);
        }

        System.out.println("Search for 12: " + hashTable.search(12)); // true
        System.out.println("Search for 25: " + hashTable.search(25)); // true
        System.out.println("Search for 11: " + hashTable.search(11)); // false
    }
}

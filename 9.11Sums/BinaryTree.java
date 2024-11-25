import java.io.*;

class BinaryTree {
    static class Node {
        int data;
        Node left, right;
        Node(int data) {
            this.data = data;
            left = right = null;
        }
    }

    public void rightView(Node root) {
        rightViewUtil(root, 0, new int[]{-1});
    }

    private void rightViewUtil(Node root, int level, int[] maxLevel) {
        if (root == null) return;
        if (level > maxLevel[0]) {
            System.out.print(root.data + " ");
            maxLevel[0] = level;
        }
        rightViewUtil(root.right, level + 1, maxLevel);  // Right first
        rightViewUtil(root.left, level + 1, maxLevel);   // Left second
    }

    public static void main(String[] args) {
        BinaryTree tree = new BinaryTree();
        Node root = new Node(1);
        root.left = new Node(2);
        root.right = new Node(3);
        root.left.left = new Node(4);
        root.left.right = new Node(5);
        root.right.right = new Node(6);
        root.left.left.left = new Node(7);

        tree.rightView(root);  
    }
}


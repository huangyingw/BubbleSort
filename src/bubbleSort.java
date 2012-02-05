public class bubbleSort {
	static public void main(String[] args) {
		int[] R = new int[5];
		R[1] = 1;
		R[2] = 2;
		R[3] = 5;
		R[4] = 4;
		R[0] = 3;
		bubbleSort b = new bubbleSort(R, 5);
		b.sort();
		System.out.println("count number:" + b.count);
		System.out.println("Sort reult:");
		b.output_int();

		R = new int[5];
		R[0] = 1;
		R[1] = 2;
		R[2] = 3;
		R[3] = 4;
		R[4] = 5;

		b = new bubbleSort(R, 5);
		b.sort();
		System.out.println("count number:" + b.count);
		System.out.println("Sort reult:");
		b.output_int();

		R = new int[5];
		R[0] = 5;
		R[1] = 4;
		R[2] = 3;
		R[3] = 2;
		R[4] = 1;

		b = new bubbleSort(R, 5);
		b.sort();
		System.out.println("count number:" + b.count);
		System.out.println("Sort reult:");
		b.output_int();

	}

	int count = 0;
	private int len;

	private int[] R;

	public bubbleSort() {
		super();
	}

	public bubbleSort(int[] r, int len) {
		super();
		R = r;
		this.len = len;
	}

	void output_int() {
		for (int i = 0; i < len; ++i)
			System.out.println(R[i]);
	}

	void sort() {
		len = R.length;
		int i, j, exchange = 0;
		for (i = len; i > 1; i--) {
			for (j = 0; j < i - 1; j++) {
				if (R[j] > R[j + 1]) {
					count++;
					exchange = 1;
					R[j] ^= R[j + 1];
					R[j + 1] ^= R[j];
					R[j] ^= R[j + 1];
				}
			}
			if (exchange == 0)
				break;
		}
	}
}

public class BubbleSort {

	private int[] data;

	public int[] getData() {
		return data;
	}

	public void setData(int[] data) {
		this.data = data;
	}

	private int count = 0;

	public BubbleSort(int[] testData) {
		super();
		this.data = testData;
	}

	void output_int() {
		for (int i = 0; i < data.length; ++i)
			System.out.println(data[i]);
	}

	void sort() {
		int len = data.length;
		int i, j, exchange = 0;
		for (i = len - 1; i > 0; i--) {
			for (j = 0; j < i; j++) {
				if (data[j] > data[j + 1]) {
					count++;
					exchange = 1;
					data[j] ^= data[j + 1];
					data[j + 1] ^= data[j];
					data[j] ^= data[j + 1];
				}
			}
			if (exchange == 0)
				break;
		}
	}
}

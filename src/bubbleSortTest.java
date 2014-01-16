import static org.junit.Assert.assertTrue;

import java.util.Arrays;

import org.junit.Test;

public class bubbleSortTest {

	@Test
	public void test() {

		int[] expect = new int[] { 1, 2, 3, 4, 5 };

		int[] data = new int[] { 5, 4, 3, 2, 1 };

		BubbleSort b = new BubbleSort(data);
		b.sort();
		assertTrue(Arrays.equals(b.getData(), expect));
	}
}

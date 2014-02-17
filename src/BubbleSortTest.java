import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.logging.Logger;

import junit.framework.Assert;

import org.junit.Test;
import org.junit.runner.RunWith;
import org.junit.runners.Parameterized;
import org.junit.runners.Parameterized.Parameters;

@SuppressWarnings("deprecation")
@RunWith(value = Parameterized.class)
public class BubbleSortTest {
	private static final Logger logger = Logger.getAnonymousLogger();
	protected String testName;
	private int[] test;
	private int[] expect;

	public BubbleSortTest(String testName, int[] test, int[] expect) {
		this.testName = testName;
		this.test = test;
		this.expect = expect;
	}

	@Test
	public void testRun() throws Exception {
		logger.info("Starting Test: " + testName);
		BubbleSort b = new BubbleSort(test);
		b.sort();
		Assert.assertTrue(Arrays.equals(b.getData(), expect));
		logger.info("Completed Test: " + testName);
	}

	@Parameters
	public static List<Object[]> getTestCases() throws Exception {
		List<Object[]> testCases = new ArrayList<Object[]>();

		testCases.add(new Object[] { "Test case #1: ",
				new int[] { 5, 4, 3, 2, 1 }, new int[] { 1, 2, 3, 4, 5 } });
		return testCases;
	}
}

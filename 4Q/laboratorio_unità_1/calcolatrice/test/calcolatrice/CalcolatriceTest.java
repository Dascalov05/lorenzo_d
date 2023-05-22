/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package calcolatrice;

import org.junit.After;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Test;
import static org.junit.Assert.*;

/**
 *
 * @author STUDENTE
 */
public class CalcolatriceTest {
    
    public CalcolatriceTest() {
    }
    
    @BeforeClass
    public static void setUpClass() {
    }
    
    @AfterClass
    public static void tearDownClass() {
    }
    
    @Before
    public void setUp() {
    }
    
    @After
    public void tearDown() {
    }

    /**
     * Test of main method, of class Calcolatrice.
     */
    @Test
    public void testSomma() {
        System.out.println("somma");
        int a = 0;
        int b = 0;
        int expResult = 0;
        int result = Calcolatrice.Somma(a,b);
        assertEquals(expResult, result);
;
        // TODO review the generated test code and remove the default call to fail.
        fail("The test case is a prototype.");
    
    }
}


import sys;
sys.path.append("../../v2/python/vestorly-python/")

import unittest
import vestorly


class TestStringMethods(unittest.TestCase):

  def test_(self):
	  self.assertEqual('foo'.upper(), 'FOO')



if __name__ == '__main__':
	unittest.main()
class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        s1=list(s)
        t1=list(t)
        if (len(s)!=len(t)):
            return False
        s1.sort()
        t1.sort()
        if s1==t1:
            return True
        else:
            return False
        

        
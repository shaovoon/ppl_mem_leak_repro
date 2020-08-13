# VC++ PPL Memory Leaks Repro

A sample application to reproduce the PPL memory leaks detected by Deleaker for bug reporting.

Bug report: [Memory leaks reported by Deleaker in PPL's parallel_for_each](https://developercommunity.visualstudio.com/content/problem/1144581/memory-leaks-reported-by-deleaker-in-ppls-parallel.html)

There could be other memory leaks in PPL's other methods because only parallel_for_each is used here.

Note to MS VC++ dev: May need to download a free trial version of [Deleaker](https://www.deleaker.com/) to help memory leak detection.




* Signal (heavy resonant pair production of Higgs bosons in $b\bar{b}b\bar{b}$ final state)  
    * UFO [2HDM: 2HDMtII_NLO](http://feynrules.irmp.ucl.ac.be/attachment/wiki/2HDM/2HDMtII_NLO.tar.gz)  
    * process:   
    `generate p p > h2 [QCD]`     
    * decay in Madspin:    
    `set spinmode none   
     decay h2 > h1 h1, h1 > b b~`




* Background (QCD multijet )   
    * process:   
    ```
    define p = p b b~    
    generate p p > b b~ b b~  
    ```  
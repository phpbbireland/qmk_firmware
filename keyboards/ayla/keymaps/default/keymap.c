// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*

[{a:7},"Reset",{x:0.25,p:"DCS",f:4,fa:[5]},"Esc",{x:1},"F1","F2","F3","F4",{x:0.5},"F5","F6","F7","F8",{x:0.5},"F9","F10","F11","F12",{x:0.25,f:3},"PrtSc","Scroll Lock","Pause"],
[{y:0.25,c:"#b7afaf",f:6},"M1",{x:0.25,c:"#cccccc",a:5,f:5},"¬\n`","!\n1","\"\n2","£\n3","$\n4","%\n5","^\n6","&\n7","*\n8","(\n9",")\n0","_\n-","+\n=",{w:2},"Backspace",{x:0.25,a:7,f:4},"Insert","Home","PgUp"],
[{c:"#b7afaf",f:6},"M2",{x:0.25,c:"#cccccc",w:1.5},"Tab","Q","W","E","R","T","Y","U","I","O","P","{","}",{w:1.5},"|",{x:0.25,f:4},"Del.","End","PgDn"],
[{c:"#b7afaf",f:6},"M3",{x:0.25,c:"#cccccc",w:1.75},"Caps","A","S","D","F","G","H","J","K","L",":","\"",{w:2.25},"Enter",{x:0.25},{c:"#b7afaf"},"V↓"," >","V↑"],
[{c:"#b7afaf",f:6},"M4",{x:0.25,c:"#cccccc",a:7,w:1.25},"Shift","\\", "Z","X","C","V","B","N","M",{a:5},"<\n,",">\n.","?\n/",{a:7,w:2.75},"Shift",{x:0.25},{c:"#b7afaf"},"<<",{c:"#cccccc"},"↑",{c:"#b7afaf"}," >>"],
[{c:"#b7afaf",f:6},"M5",{x:0.25,c:"#cccccc",a:7,w:1.25},"Ctrl",{w:1.25},"Os",{w:1.25},"Alt",{w:6.25},"",{w:1.25},"Alt",{w:1.25},"Fn",{w:1.25},"Ctrl",{w:1.25},"Os",{x:0.25},"←","↓","→"]


[{f:3,a:7},"Reset",{x:0.25},{"p":"DCS","a":7,"f":4,"fa":[5]},"Esc",{"x":1},"F1","F2","F3","F4",{"x":0.5},"F5","F6","F7","F8",{"x":0.5},"F9","F10","F11","F12",{"x":0.25,"f":3},"PrtSc","Scroll Lock","Pause"],
[{y:0.25,"f":6},"M1",{"x":0.25,"a":5,"f":5},"¬\n`","!\n1","\"\n2","£\n3","$\n4","%\n5","^\n6","&\n7","*\n8","(\n9",")\n0","_\n-","+\n=",{"w":2},"Backspace",{"x":0.25,"a":7,"f":4},"Insert","Home","PgUp"],
[{"f":6}, "M2",{x:0.25},{"f":6,"w":1.5},{"f":6,"w":1.5},"Tab","Q","W","E","R","T","Y","U","I","O","P","{","}",{"x":0.25,"w":1.25,"h":2,"w2":1.5,"h2":1,"x2":-0.25},"Enter",{"x":0.25,"f":4},"Del.","End","PgDn"],
[{"f":6}, "M3",{x:0.25},{"f":6,"w":1.75},"Caps","A","S","D","F","G","H","J","K","L",":","@","~",{"x":1.5},"V↓"," >","V↑"],
[{"f":6}, "M4",{x:0.25},{w:2.25},{"w":1.25},"Shift","\\","Z","X","C","V","B","N","M",",",".","/",{"w":2.75},"Shift",{"x":0.25},"<<","↑"," >>"],
[{"f":6}, "M5",{x:0.25},{w:1.25},{"w":1.25},"Ctrl",{"w":1.25},"Menu",{"w":1.25},"Alt",{"p":"DCSSPACE","w":6.25},"",{"p":"DCS","w":1.25},"Alt",{"w":1.25},"FN",{"w":1.25},"Menu",{"w":1.25},"Ctrl",{"x":0.25},"←","↓","→"]

Fancy red/black

[{c:"#3f3e3e",t:"#FFFFFF",a:7,f:5},"P",{x:0.25,c:"#910707",t:"#ffffff"},"ESC",{x:1,c:"#3f3e3e",t:"#FFFFFF",sm:"cherry"},"F1","F2","F3","F4",{x:0.5},"F5","F6","F7","F8",{x:0.5},"F9","F10","F11","F12",{x:0.25,f:4},"PtrSc","ScrLk","Pause"],
[{y:0.25,f:5},"P1",{x:0.25,a:5},"¬\n`","!\n1","\"\n2","£\n3","$\n4","%\n5","^\n6","&\n7","*\n8","(\n9",")\n0","_\n-","+\n=",{a:4,w:2},"Backspace",{x:0.25,a:7,f:4},"Ins","Home","PgUp"],
[{f:5},"P2",{x:0.25,c:"#910707",t:"#fefefe",w:1.5},"Tab",{c:"#3f3e3e",t:"#FFFFFF"},"Q","W","E","R","T","Y","U","I","O","P",{a:5},"{\n[","}\n]",{x:0.25,c:"#910707",t:"#fefefe",a:4,w:1.25,h:2,w2:1.5,h2:1,x2:-0.25},"Enter",{x:0.25,c:"#3f3e3e",t:"#FFFFFF",a:7,f:4},"Del","End","PgDn"],
[{f:5},"P3",{x:0.25,c:"#910707",t:"#fefefe",w:1.75},"Caps",{c:"#3f3e3e",t:"#FFFFFF"},"A","S","D","F","G","H","J","K","L",{a:5},":\n;","@\n'","~\n#",{x:1.5,a:7,f:4},"<<",">",">>"],
[{f:5},"P4",{x:0.25,c:"#910707",t:"#fefefe",w:1.25},"Shift",{c:"#3f3e3e",t:"#FFFFFF",a:5},"|\n\\",{a:4},"Z","X","C","V","B","N","M",{a:5},"<\n,",">\n.","?\n/",{c:"#910707",t:"#fefefe",a:7,w:2.75},"Shift",{x:0.25,c:"#3f3e3e",t:"#FFFFFF",f:4},"Vol ↓",{c:"#910707",t:"#f4f1f1",f:5},"↑",{c:"#3f3e3e",t:"#FFFFFF",f:4},"Vol ↑"],
[{f:5},"P5",{x:0.25,c:"#910707",t:"#fefefe",w:1.25},"Ctrl",{w:1.25},"Con",{w:1.25},"Alt",{c:"#3f3e3e",t:"#000000",w:6.25},"",{c:"#910707",t:"#fefefe",w:1.25},"AltGr",{w:1.25},"Fn",{w:1.25},"Menu",{w:1.25},"Ctrl",{x:0.25,t:"#f4f1f1"},"←","↓","→"]





      0       1    2    3   4   5   6    7   8   9  10   11  12  13  14   15   16   17
    ┌───┐   ┌───┐┌───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┐┌───┐┌───┐
    │Rst│   │Esc││P 6││F1 │F2 │F3 │F4 ││F5 │F6 │F7 │F8 ││F9 │F10│F11│F12││PrL││SL ││Pse│
    └───┘   └───┘└───┘└───┴───┴───┴───┘└───┴───┴───┴───┘└───┴───┴───┴───┘└───┘└───┘└───┘
    ┌───┐   ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐┌───┐┌───┐┌───┐
    │P1 │   │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ _ │ + │ Bckspc││Ins││Hme││PgU│
    ├───┤   ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤├───┤├───┤├───┤
    │P2 │   │ Tab │ q │ w │ e │ r │ t │ y │ u │ i │ o │ p │ [ │ ] │Enter││Del││End││PgD│
    ├───┤   ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │├───┤├───┤├───┤
    │P3 │   │ Caps │ a │ s │ d │ f │ g │ h │ j │ k │ l │ ; │ @ │ ~ │    ││<< ││ > ││ >>│
    ├───┤   ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤├───┤├───┤├───┤
    │P4 │   │ LShift │ z │ x │ c │ v │ b │ n │ m │ , │ . │ / │  RShift  ││P7 ││ ↑ ││P8 │
    ├───┤   ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤├───┤├───┤├───┤
    │P5 │   │LCrl│GUI │LAlt│         Space          │RAlt│ Fn │Menu│RCrl││ ← ││ ↓ ││ → │
    └───┘   └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘└───┘└───┘└───┘

      0      1    2    3   4   5   6    7   8   9  10   11  12  13  14   15   16   17
    ┌───┐   ┌───┐     ┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┐┌───┐┌───┐
    │Rst│   │Esc│     │F1 │F2 │F3 │F4 ││F5 │F6 │F7 │F8 ││F9 │F10│F11│F12││PrL││SL ││Pse│
    └───┘   └───┘     └───┴───┴───┴───┘└───┴───┴───┴───┘└───┴───┴───┴───┘└───┘└───┘└───┘
    ┌───┐   ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐┌───┐┌───┐┌───┐
    │M1 │   │ ¬ │ ! │ " │ € │ $ │ % │ ^ │ & │ * │ ( │ ) │ - │ = │ Bckspc││Ins││Hme││PgU│
    ├───┤   ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤├───┤├───┤├───┤
    │M2 │   │ Tab │ q │ w │ e │ r │ t │ y │ u │ i │ o │ p │ [ │ ] │Enter││Del││End││PgD│
    ├───┤   ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │├───┤├───┤├───┤
    │M3 │   │ Caps │ a │ s │ d │ f │ g │ h │ j │ k │ l │ ; │ @ │ ~ │    ││<< ││ > ││ >>│
    ├───┤   ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤├───┤├───┤├───┤
    │M4 │   │ LShift │ z │ x │ c │ v │ b │ n │ m │ , │ . │ / │  RShift  ││P7 ││ ↑ ││P8 │
    ├───┤   ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤├───┤├───┤├───┤
    │M5 │   │LCrl│GUI │LAlt│         Space          │RAlt│ Fn │Menu│RCrl││ ← ││ ↓ ││ → │
    └───┘   └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘└───┘└───┘└───┘

    ┌───┐   ┌───┐┌───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┐┌───┐┌───┐
    │   │   │   ││   ││   │   │   │   ││   │   │   │   ││   │   │   │   ││   ││   ││   │
    └───┘   └───┘└───┘└───┴───┴───┴───┘└───┴───┴───┴───┘└───┴───┴───┴───┘└───┘└───┘└───┘

    ┌───┐   ┌───┐     ┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┐┌───┐┌───┐
    │Rst│   │Esc│     │F1 │F2 │F3 │F4 ││F5 │F6 │F7 │F8 ││F9 │F10│F11│F12││PrL││SL ││Pse│
    └───┘   └───┘     └───┴───┴───┴───┘└───┴───┴───┴───┘└───┴───┴───┴───┘└───┘└───┘└───┘
    ┌───┐   ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐┌───┐┌───┐┌───┐
    │M1 │   │   │ ! │ " │ € │ $ │ % │ ^ │ & │ * │ ( │ ) │ _ │ + │       ││   ││   ││   │
    ├───┤   ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤├───┤├───┤├───┤
    │M2 │   │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ { │ } │     ││   ││   ││   │
    ├───┤   ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │├───┤├───┤├───┤
    │M3 │   │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ : │ ' │ # │    ││   ││   ││   │
    ├───┤   ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤├───┤├───┤├───┤
    │M4 │   │LSht│ \ │ Z │ X │ C │ V │ B │ N │ M │ < │ > │ ? │ RShift   ││M6 ││   ││ M7│
    ├───┤   ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤├───┤├───┤├───┤
    │M5 │   │    │    │    │                        │    │    │    │    ││   ││   ││   │
    └───┘   └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘└───┘└───┘└───┘

    ┌───┐   ┌───┐┌───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┐┌───┐┌───┐
    │0,0│   │0,1││N/A││0,2│0,3│0,4│0,5││0,6│0,7│0,8│0,9││1,0│1,1│1,2│1,3││1,4││1,5││1,6│
    └───┘   └───┘└───┘└───┴───┴───┴───┘└───┴───┴───┴───┘└───┴───┴───┴───┘└───┘└───┘└───┘
    ┌───┐   ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐┌───┐┌───┐┌───┐
    │1,7│   │1,8│1,9│2,0│2,1│2,2│2,3│2,4│2,5│2,6│2,7│2,8│2,9│3,0│  3,1  ││3,2││3,3││3,4│
    ├───┤   ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤├───┤├───┤├───┤
    │3,5│   │ 3,6 │3,7│3,8│3,9│4,0│4,1│4,2│4,3│4,4│4,5│4,6│4,7│4,8│     ││4,9││5,0││5,1│
    ├───┤   ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │├───┤├───┤├───┤
    │5,2│   │ 5,3  │5,4│5,5│5,6│5,7│5,8│5,9│6,0│6,1│6,2│6,3│6,4│6,5│6.6 ││6,7││6,8││6,9│
    ├───┤   ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤├───┤├───┤├───┤
    │7,0│   │7,1 │7,2│7,3│7,4│7,5│7,6│7,7│7,8│7,9│8,0│8,1│8,2│    8,3   ││8,4││8,5││8,6│
    ├───┤   ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤├───┤├───┤├───┤
    │8,7│   │8.8 │8,9 │9,1 │           9,2          │9,3 │9,4 │9,5 │9,6 ││9,7││9,8││9,9│
    └───┘   └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘└───┘└───┘└───┘

ANSI

Previous... encoder in 3rd position R0/C2, keep for reference...

       C0    C1    C2    C3    C4    C5    C6    C7    C8    C9
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R0    │Rst│ │Esc│ │R E│ │F1 │ │F2 │ │F3 │ │F4 │ │F5 │ │F6 │ │F7 │
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R1    │F8 │ │F9 │ │F10│ │F11│ │F12│ │Prl│ │SL │ │Pse│ │P1 │ │ ` │
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R2    │ 1 │ │ 2 │ │ 3 │ │ 4 │ │ 5 │ │ 6 │ │ 7 │ │ 8 │ │ 9 │ │ 0 │
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R3    │ - │ │ + │ │BS │ │Ins│ │Hme│ │PgU│ │P2 │ │Tab│ │ Q │ │ W │
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R4    │ E │ │ R │ │ T │ │ Y │ │ U │ │ I │ │ O │ │ P │ │ [ │ │ ] │
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R5    │ # │ │C R│ │Del│ │End│ │PgD│ │P3 │ │Cap│ │ A │ │ S │ │ D │
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R6    │ F │ │ G │ │ H │ │ J │ │ K │ │ L │ │ ; │ │ @ │ │C R│ │<< │
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R7    │ > │ │ >>│ │P4 │ │LSh│ │ Z │ │ X │ │ C │ │ V │ │ B │ │ N │
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R8    │ M │ │ < │ │ > │ │ ? │ │Rsh│ │P7 │ │ ↑ │ │P8 │ │P5 │ │Lcr│
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R9    │GUI│ │Llt│ │S P│ │Rlt│ │Fn │ │Men│ │Rcr│ │ ← │ │ ↓ │ │ → │
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘

ISO
Current... 10 X 10 Matrix Layout

       C0    C1    C2    C3    C4    C5    C6    C7    C8    C9
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R0    │Rst│ │Esc│ │F1 │ │F2 │ │F3 │ │F4 │ │F5 │ │F6 │ │F7 │ │F8 │
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R1    │F9 │ │F10│ │F11│ │F12│ │Prl│ │SL │ │Pse│ │M1 │ │ ` │ │ 1 │
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R2    │ 2 │ │ 3 │ │ 4 │ │ 5 │ │ 6 │ │ 7 │ │ 8 │ │ 9 │ │ 0 │ │ - │
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R3    │ + │ │BS │ │Ins│ │Hme│ │PgU│ │M2 │ │Tab│ │ Q │ │ W │ │ E │
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R4    │ R │ │ T │ │ Y │ │ U │ │ I │ │ O │ │ P │ │ [ │ │ ] │ │ # │
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R5    │Del│ │End│ │PgD│ │M3 │ │Cap│ │ A │ │ S │ │ D │ │ F │ │ G │
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R6    │ H │ │ J │ │ K │ │ L │ │ ; │ │ @ │ │C R│ │<< │ │ > │ │ >>│
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R7    │M4 │ │LSh│ │ \ │ │ Z │ │ X │ │ C │ │ V │ │ B │ │ N │ │ M │
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R8    │ , │ │ . │ │ / │ │Rsh│ │M5 │ │ ↑ │ │M6 │ │M7 │ │Lcr│ │GUI│
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R9    │Llt│ │S P│ │Rlt│ │Fn │ │Men│ │Rct│ │ ← │ │ ↓ │ │ → │ │SPA│
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘

      KC_NUHS same as  KC_TILDE, ALGR(KC_3)
*/



    /*  Row:    0        1        2          3        4         5        6         7        8        9  */
    [_BASE] = LAYOUT_411(
                KC_TRNS, KC_ESC,  KC_F1,     KC_F2,   KC_F3,    KC_F4,    KC_F5,    KC_F6,   KC_F7,   KC_F8,
                KC_F9,   KC_F10,  KC_F11,    KC_F12,  KC_PSCR,  KC_SCRL,  KC_PAUSE, KC_TRNS, KC_GRV,  KC_1,
                KC_2,    KC_3,    KC_4,      KC_5,    KC_6,     KC_7,     KC_8,     KC_9,    KC_0,    KC_MINS,
                KC_EQL,  KC_BSPC, KC_INSERT, KC_HOME, KC_PGUP,  KC_TRNS,  KC_TAB,   KC_Q,    KC_W,    KC_E,
                KC_R,    KC_T,    KC_Y,      KC_U,    KC_I,     KC_O,     KC_P,     KC_LBRC, KC_RBRC, KC_DEL,
                KC_END,  KC_PGDN, KC_TRNS,   KC_CAPS, KC_A,     KC_S,     KC_D,     KC_F,    KC_G,    KC_H,
                KC_J,    KC_K,    KC_L,      KC_SCLN, KC_QUOT,  KC_TILDE, KC_ENT,   KC_TRNS, KC_TRNS, KC_TRNS,
                KC_TRNS, KC_LSFT, KC_BSLS,   KC_Z,    KC_X,     KC_C,     KC_V,     KC_B,    KC_N,    KC_M,
                KC_COMM, KC_DOT,  KC_SLSH,   KC_RSFT, KC_TRNS,  KC_UP,    KC_TRNS,  KC_TRNS, KC_LCTL, KC_LGUI,
                KC_LALT, KC_SPC,  KC_RALT,   MO(_FN), KC_MENU,  KC_RCTL,  KC_LEFT,  KC_DOWN, KC_RIGHT
                ),

    /*  Row:    0        1        2        3        4        5        6        7        8        9  */
    [_FN]   = LAYOUT_411(
                QK_BOOT, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_TOG,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_HUI,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_HUD,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_VAI,
                _______, _______, _______, _______, _______, _______, _______, RGB_SPD, RGB_VAD, RGB_SPI
            ),
};




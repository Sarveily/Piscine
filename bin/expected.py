#!/usr/bin/env python3
"""Sortie de reference pour rush00..rush04 (derivee des exemples du sujet)."""
import sys

# TL, TOP, TR, SIDE, BL, BOT, BR
SPEC = {
    "00": ("o", "-", "o", "|", "o", "-", "o"),
    "01": ("/", "*", "\\", "*", "\\", "*", "/"),
    "02": ("A", "B", "A", "B", "C", "B", "C"),
    "03": ("A", "B", "C", "B", "A", "B", "C"),
    "04": ("A", "B", "C", "B", "C", "B", "A"),
}

def rush(n, x, y):
    tl, top, tr, side, bl, bot, br = SPEC[n]
    if x <= 0 or y <= 0:
        return ""
    out = []
    for i in range(y):
        line = []
        for j in range(x):
            first_row, last_row = i == 0, i == y - 1
            first_col, last_col = j == 0, j == x - 1
            if first_row:
                line.append(tl if first_col else tr if last_col else top)
            elif last_row:
                line.append(bl if first_col else br if last_col else bot)
            else:
                line.append(side if (first_col or last_col) else " ")
        out.append("".join(line))
    return "\n".join(out) + "\n"

if __name__ == "__main__":
    sys.stdout.write(rush(sys.argv[1], int(sys.argv[2]), int(sys.argv[3])))

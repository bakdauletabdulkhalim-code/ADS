import pyautogui
import pyperclip
import time
code = pyperclip.paste()
print("Switch keyboard to ENG!")
print("You have 5 seconds...")
time.sleep(5)
for line in code.splitlines():
    pyautogui.write(line.strip(), interval = 0.002)
    pyautogui.press("enter")
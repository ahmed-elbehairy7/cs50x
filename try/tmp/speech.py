import pyttsx3
from cs50 import get_string

name = get_string("What's your name: ")
engine = pyttsx3.init()
engine.say(f"Hello, {name}")
engine.runandwait()
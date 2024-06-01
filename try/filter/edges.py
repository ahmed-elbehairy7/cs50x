from PIL import Image, ImageFilter

before = Image.open("pikachu.jpg")
after = before.filter(ImageFilter.FIND_EDGES)
after.save("out.jpg")
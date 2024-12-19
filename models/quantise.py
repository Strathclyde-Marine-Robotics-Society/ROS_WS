from ultralytics import YOLO

model = YOLO("640ModelNavier.pt")

model.export(format="engine", half=True) 

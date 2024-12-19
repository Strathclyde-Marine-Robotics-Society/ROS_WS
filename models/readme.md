The models available here are the old two-stage model and a new single stage model.

The old two-stage model worked by first detecting buoys without classifying them using the 1000NoClass model, which accepted images of width 1000 pixels
It would then crop the resulting bounding boxes and send it to the SimpleCNN model to classify them. This was done because a joint model struggled to see buoys
when the class was unclear, and we'd rather detect a buoy without knowing the class than not detect it at all.

The new model is a much stronger model trained on 30k images provided by the Navier team. After some testing, a model of width 800 seemed to give the best performance to accuracy tradeoff.
This was also intentionally done to match an available camera resolution of 800x600.

I've also included a 640x480 version of the model since it turns out this model better matches the resolution of the camera after applying un-distortion.

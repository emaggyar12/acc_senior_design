import os
from pysimlink import Model, print_all_params

model = Model("Blazer_MiL_Model", os.path.join(os.path.dirname(__file__), "../models", "lookup_model.zip"))#, force_rebuild=True)
model.reset()
print_all_params(model)

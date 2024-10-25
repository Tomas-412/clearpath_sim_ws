import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/tomas-jelinek/clearpath_sim_ws/install/obst_avoid'

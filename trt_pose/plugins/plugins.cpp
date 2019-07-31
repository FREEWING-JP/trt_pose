#include <torch/extension.h>
#include "find_peaks.hpp"
#include "paf_score_graph.hpp"
#include "refine_peaks.hpp"


PYBIND11_MODULE(TORCH_EXTENSION_NAME, m) {
  m.def("find_peaks", &find_peaks, "find_peaks");
  m.def("find_peaks_out", &find_peaks_out, "find_peaks_out");
  m.def("paf_score_graph", &paf_score_graph, "paf_score_graph");
  m.def("paf_score_graph_out", &paf_score_graph_out, "paf_score_graph_out");
  m.def("refine_peaks", &refine_peaks, "refine_peaks");
  m.def("refine_peaks_out", &refine_peaks_out, "refine_peaks_out");
}
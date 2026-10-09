#include "docscanner/DocScanner.hpp"

namespace docscanner {

void DocScannerCamera::configure(bool showCropOverlay) { show_overlay_ = showCropOverlay; }
bool DocScannerCamera::start() { return true; }
void DocScannerCamera::stop() {}
ScanResult DocScannerCamera::capture() {
  return ScanResult{"", "", false, "OpenCV/V4L2 crop pipeline not yet wired"};
}

}  // namespace docscanner

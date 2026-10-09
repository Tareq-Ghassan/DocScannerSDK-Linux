#pragma once
#include <string>

namespace docscanner {

struct ScanResult {
  std::string frontImagePath;
  std::string backImagePath;
  bool isSuccess = false;
  std::string errorMessage;
};

class DocScannerCamera {
 public:
  static constexpr const char* Version = "1.0.0";
  void configure(bool showCropOverlay = true);
  bool start();
  void stop();
  ScanResult capture();  // crop to white rectangle
 private:
  bool show_overlay_ = true;
};

}  // namespace docscanner

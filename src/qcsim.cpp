#include <iostream>
#include <qcsim.hpp>
#include <qreg.hpp>

namespace qc {

std::pair<int, int> linked_version() {
  return std::make_pair(QCSIM_VERSION_MAJOR, QCSIM_VERSION_MINOR);
}

void simulate(int qbits) {
	qregister test(1);
	std::cout<<test.nqbits<<"\n";
}

} // namespace qc

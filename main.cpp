#include <QCoreApplication>
#include "protocols/testmultiplayer/vehiclestate.pb.h"

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  // Verify that the version of the library that we linked against is
  // compatible with the version of the headers we compiled against.
  //GOOGLE_PROTOBUF_VERIFY_VERSION;
  VehicleState test;

  test.set_id("asdf");
  test.set_headlight(true);
  test.set_brakelight(true);
  std::cout << "id: " << test.id() << std::endl;
  test.clear_id();
  std::cout << "id: " << test.id() << std::endl;
  std::cout << "sizeof:" << sizeof(VehicleState) << std::endl;
  return 0;
}

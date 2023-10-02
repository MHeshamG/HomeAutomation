#include <iostream>
#include <memory>

#include <Database.h>
#include <DatabaseStore.h>

#include <Device.h>

using Core::Device;
using Core::IDatabase;
using Core::DatabaseStore;

using Dependencies::Database;

int main()
{
  std::shared_ptr<IDatabase> db = std::make_shared<Database>();
  db->init();
  std::unique_ptr<DatabaseStore<Device>> dds = std::make_unique<DatabaseStore<Device>>("devices");
  dds->setSource(db);
  return 0;
}
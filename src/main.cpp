#include <iostream>
#include <memory>

#include <Database.h>
#include <DataStore.h>

#include <Device.h>

using HomeAutomation::Device;

using Dependencies::IDataStore;
using Dependencies::DataStore;
using Dependencies::Database;

int main()
{
  std::shared_ptr<Database> db = std::make_shared<Database>();
  std::unique_ptr<IDataStore<Device,Database>> dds = std::make_unique<DataStore<Device,Database>>("devices");
  dds->setSource(db);
  return 0;
}
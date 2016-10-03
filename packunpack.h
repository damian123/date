#pragma once

#include <type_traits>
#include <sstream>
#include <ostream>
#include <istream>
#include <memory>

#include <cereal/cereal.hpp>

#include <cereal/archives/xml.hpp>
#include <cereal/archives/json.hpp>
#include <cereal/archives/binary.hpp>
#include <cereal/archives/portable_binary.hpp>

#include <cereal/types/string.hpp>
#include <cereal/types/vector.hpp>
#include <cereal/types/chrono.hpp>


namespace date {

  using XMLOutputArchiveType = cereal::XMLOutputArchive;
  using JSONOutputArchiveType = cereal::JSONOutputArchive;
  using BinaryOutputArchiveType = cereal::BinaryOutputArchive;
  using PortableBinaryOutputArchiveType = cereal::PortableBinaryOutputArchive;

  using XMLInputArchiveType = cereal::XMLInputArchive;
  using JSONInputArchiveType = cereal::JSONInputArchive;
  using BinaryInputArchiveType = cereal::BinaryInputArchive;
  using PortableBinaryInputArchiveType = cereal::PortableBinaryInputArchive; 

} // namespace date


// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2017-2019, The Iridium developers
// You should have received a copy of the GNU Lesser General Public License
// If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <string>
#include <ostream>

namespace CryptoNote {

void importLegacyKeys(const std::string& legacyKeysFilename, const std::string& password, std::ostream& destination);

} //namespace CryptoNote

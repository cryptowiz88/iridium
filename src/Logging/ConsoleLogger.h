// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2017-2019, The Iridium developers
// You should have received a copy of the GNU Lesser General Public License
// If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <mutex>
#include "CommonLogger.h"

namespace Logging {

class ConsoleLogger : public CommonLogger {
public:
  ConsoleLogger(Level level = DEBUGGING);

protected:
  virtual void doLogString(const std::string& message) override;

private:
  std::mutex mutex;
};

}

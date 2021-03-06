/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef incl_HPHP_TEST_LOGGER_H_
#define incl_HPHP_TEST_LOGGER_H_

#include <runtime/base/base_includes.h>
#include <runtime/ext/ext_variable.h>

///////////////////////////////////////////////////////////////////////////////

class TestLogger {

public:
  char* log_url;

  TestLogger() {}

  bool initializeRun();
  bool logTest(HPHP::Array testInfo);
  bool finishRun();
  bool doLog();

protected:
  int  run_id;

private:
  int getOutput(const char *cmd, std::string &buf);
  HPHP::Array postData(HPHP::Array arr);
  std::string getRepoRoot();
  std::string getSVNRevision();
  std::string getGitRevision();
};

#endif // incl_HPHP_TEST_LOGGER_H_

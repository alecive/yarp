/*
 *  Yarp Modules Manager
 *  Copyright: (C) 2011 Robotics, Brain and Cognitive Sciences - Italian Institute of Technology (IIT)
 *  Authors: Ali Paikan <ali.paikan@iit.it>
 *
 *  Copy Policy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT
 *
 */

#ifndef _TEMPLATE_RES_
#define _TEMPLATE_RES_

#include <string>

static const std::string str_app_template =
"  <application>\n"
"      <!-- Generic information-->\n"
"      <name>Application</name>\n"
"      <description></description>\n"
"      <version></version>\n"
"\n"
"      <authors>\n"
"          <author email=\"\"> author </author>\n"
"      </authors>\n"
"\n"
"  </application>\n";

static const std::string str_mod_template =
"<module>\n"
"    <!-- module's name should match its executable file's name. -->\n"
"    <name>module_name</name>\n"
"    <description>Template module</description>\n"
"    <version>1.0</version>\n"
"\n"
"    <!-- <arguments> can have multiple <param> tags-->\n"
"    <arguments>\n"
"        <param desc=\"first parameter\"> param1 </param>\n"
"    </arguments>\n"
"\n"
"    <!-- <authors> can have multiple <author> tags. -->\n"
"    <authors>\n"
"        <author email=\"\"> author1 </author>\n"
"    </authors>\n"
"\n"
"     <!-- <data> can have multiple <input> or <output> tags. -->\n"
"     <data>\n"
"        <!-- input data if available-->\n"
"        <input>\n"
"            <!-- <type> refers to nominal type of data (e.g. ImageFrame, String). -->\n"
"            <type>DataType</type>\n"
"\n"
"            <!-- input port which receive the data. -->\n"
"            <port carrier=\"tcp\">/portname</port>\n"
"\n"
"            <!-- required input means the execution of module depends on\n"
"                 this input data. Notice that not all the input are required\n"
"                 for a module to perform its task (e.g. control input, status\n"
"                 request input). -->\n"
"            <required>yes</required>\n"
"\n"
"            <!-- priority forces the execution of module to be delayed\n"
"                 until the required data becomes available on the port -->\n"
"            <priority>no</priority>\n"
"            <description></description>\n"
"        </input>\n"
"\n"
"        <!-- output datas if available -->\n"
"        <output>\n"
"            <type>DataType</type>\n"
"            <port carrier=\"tcp\">/portname</port>\n"
"            <description></description>\n"
"        </output>\n"
"    </data>\n"
"\n"
"    <!-- physical and logical resource dependencies can be introduced in this\n"
"         section. Dependencies must follow resource conceptional models. Currently\n"
"         available resource models are 'memory', 'processor', 'storage', 'network',\n"
"         'yarp_port', 'platform' and 'gpu'. All resource dependencies should be introduced\n"
"         inside <computer></computer> tags. While resources described inside <computer>\n"
"         tags represent conjunctional dependency, resources from different <computer>\n"
"         tags can be seen as disjunctions. Meaning that If a module depend on either\n"
"         resource R1 or R2 they can be introduced inside two different <computer> tags.\n"
"         Resource dependencies should be introduced if they are really required. For\n"
"         example, if module's performance drops significantly in case of memory swapping,\n"
"         a memory resource dependency can be introduced with the required memory space. -->\n"
"    <dependencies>\n"
"        <computer>\n"
"        </computer>\n"
"    </dependencies>\n"
"\n"
"    <!-- specific libraries or header files which are used for development -->\n"
"    <development>\n"
"        <header></header>\n"
"        <library></library>\n"
"    </development>\n"
"\n"
"</module>\n";

static const std::string str_res_template =
"<resources>\n"
"    <!-- Mutiple computer descriptions can be introduced -->\n"
"    <computer>\n"
"        <name>hostname1</name>\n"
"        <description>Template resource</description>\n"
"\n"
"        <!-- A disabled resource will not be used. -->\n"
"        <disable>no</disable>\n"
"\n"
"        <!-- Platform, Memory, Storage, Processor and Network speceification\n"
"        will be discoverd automatically. But peripherals sush as GPU need to\n"
"        be specifically introduced. -->\n"
"    </computer>\n"
"\n"
"</resources>\n";



#endif //_TEMPLATE_RES_


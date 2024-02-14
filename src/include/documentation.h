#ifndef _DOCUMENTATION_H_
#define _DOCUMENTATION_H_

#include <stdio.h>
#include <string.h>
#include <unistd.h>

/*

███████╗██╗   ██╗ ██╗██╗      ██╗  ██╗
██╔════╝██║   ██║ ██║██║      ╚██╗██╔╝
█████╗  ██║   ██║ ██║██║       ╚███╔╝ 
██╔══╝  ╚██╗ ██╔╝ ██║██║       ██╔██╗ 
███████╗ ╚████╔╝ ██║███████╗ ██╔╝ ██╗
╚══════╝  ╚═══╝   ╚═╝╚══════╝╚═╝  ╚═╝

By YZBruh

*/

/*
 * Copyright 2024 evilx
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at

 *     http://www.apache.org/licenses/LICENSE-2.0

 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// I do not accept responsibility or responsibilities. The user or user is responsible for any serious damage that may occur!

void wiew_license() {
    printf("                                 Apache License\n");
    printf("                           Version 2.0, January 2004\n");
    printf("                        http://www.apache.org/licenses/\n\n");
    printf("   TERMS AND CONDITIONS FOR USE, REPRODUCTION, AND DISTRIBUTION\n\n");
    printf("   1. Definitions.\n\n");
    printf("      \"License\" shall mean the terms and conditions for use, reproduction,\n");
    printf("      and distribution as defined by Sections 1 through 9 of this document.\n\n");
    printf("      \"Licensor\" shall mean the copyright owner or entity authorized by\n");
    printf("      the copyright owner that is granting the License.\n\n");
    printf("      \"Legal Entity\" shall mean the union of the acting entity and all\n");
    printf("      other entities that control, are controlled by, or are under common\n");
    printf("      control with that entity. For the purposes of this definition,\n");
    printf("      \"control\" means (i) the power, direct or indirect, to cause the\n");
    printf("      direction or management of such entity, whether by contract or\n");
    printf("      otherwise, or (ii) ownership of fifty percent (50%%) or more of the\n");
    printf("      outstanding shares, or (iii) beneficial ownership of such entity.\n\n");
    printf("      \"You\" (or \"Your\") shall mean an individual or Legal Entity\n");
    printf("      exercising permissions granted by this License.\n\n");
    printf("      \"Source\" form shall mean the preferred form for making modifications,\n");
    printf("      including but not limited to software source code, documentation\n");
    printf("      source, and configuration files.\n\n");
    printf("      \"Object\" form shall mean any form resulting from mechanical\n");
    printf("      transformation or translation of a Source form, including but\n");
    printf("      not limited to compiled object code, generated documentation,\n");
    printf("      and conversions to other media types.\n\n");
    printf("      \"Work\" shall mean the work of authorship, whether in Source or\n");
    printf("      Object form, made available under the License, as indicated by a\n");
    printf("      copyright notice that is included in or attached to the work\n");
    printf("      (an example is provided in the Appendix below).\n\n");
    printf("      \"Derivative Works\" shall mean any work, whether in Source or Object\n");
    printf("      form, that is based on (or derived from) the Work and for which the\n");
    printf("      editorial revisions, annotations, elaborations, or other modifications\n");
    printf("      represent, as a whole, an original work of authorship. For the purposes\n");
    printf("      of this License, Derivative Works shall not include works that remain\n");
    printf("      separable from, or merely link (or bind by name) to the interfaces of,\n");
    printf("      the Work and Derivative Works thereof.\n\n");
    printf("      \"Contribution\" shall mean any work of authorship, including\n");
    printf("      the original version of the Work and any modifications or additions\n");
    printf("      to that Work or Derivative Works thereof, that is intentionally\n");
    printf("      submitted to Licensor for inclusion in the Work by the copyright owner\n");
    printf("      or by an individual or Legal Entity authorized to submit on behalf of\n");
    printf("      the copyright owner. For the purposes of this definition, \"submitted\"\n");
    printf("      means any form of electronic, verbal, or written communication sent\n");
    printf("      to the Licensor or its representatives, including but not limited to\n");
    printf("      communication on electronic mailing lists, source code control systems,\n");
    printf("      and issue tracking systems that are managed by, or on behalf of, the\n");
    printf("      Licensor for the purpose of discussing and improving the Work, but\n");
    printf("      excluding communication that is conspicuously marked or otherwise\n");
    printf("      designated in writing by the copyright owner as \"Not a Contribution.\"\n\n");
    printf("      \"Contributor\" shall mean Licensor and any individual or Legal Entity\n");
    printf("      on behalf of whom a Contribution has been received by Licensor and\n");
    printf("      subsequently incorporated within the Work.\n\n");
    printf("   2. Grant of Copyright License. Subject to the terms and conditions of\n");
    printf("      this License, each Contributor hereby grants to You a perpetual,\n");
    printf("      worldwide, non-exclusive, no-charge, royalty-free, irrevocable\n");
    printf("      copyright license to reproduce, prepare Derivative Works of,\n");
    printf("      publicly display, publicly perform, sublicense, and distribute the\n");
    printf("      Work and such Derivative Works in Source or Object form.\n\n");
    printf("   3. Grant of Patent License. Subject to the terms and conditions of\n");
    printf("      this License, each Contributor hereby grants to You a perpetual,\n");
    printf("      worldwide, non-exclusive, no-charge, royalty-free, irrevocable\n");
    printf("      (except as stated in this section) patent license to make, have made,\n");
    printf("      use, offer to sell, sell, import, and otherwise transfer the Work,\n");
    printf("      where such license applies only to those patent claims licensable\n");
    printf("      by such Contributor that are necessarily infringed by their\n");
    printf("      Contribution(s) alone or by combination of their Contribution(s)\n");
    printf("      with the Work to which such Contribution(s) was submitted. If You\n");
    printf("      institute patent litigation against any entity (including a\n");
    printf("      cross-claim or counterclaim in a lawsuit) alleging that the Work\n");
    printf("      or a Contribution incorporated within the Work constitutes direct\n");
    printf("      or contributory patent infringement, then any patent licenses\n");
    printf("      granted to You under this License for that Work shall terminate\n");
    printf("      as of the date such litigation is filed.\n\n");
    printf("   4. Redistribution. You may reproduce and distribute copies of the\n");
    printf("      Work or Derivative Works thereof in any medium, with or without\n");
    printf("      modifications, and in Source or Object form, provided that You\n");
    printf("      meet the following conditions:\n\n");
    printf("      (a) You must give any other recipients of the Work or\n");
    printf("          Derivative Works a copy of this License; and\n");
    printf("      (b) You must cause any modified files to carry prominent notices\n");
    printf("          stating that You changed the files; and\n");
    printf("      (c) You must retain, in the Source form of any Derivative Works\n");
    printf("          that You distribute, all copyright, patent, trademark, and\n");
    printf("          attribution notices from the Source form of the Work,\n");
    printf("          excluding those notices that do not pertain to any part of\n");
    printf("          the Derivative Works; and\n");
    printf("      (d) If the Work includes a \"NOTICE\" text file as part of its\n");
    printf("          distribution, then any Derivative Works that You distribute must\n");
    printf("          include a readable copy of the attribution notices contained\n");
    printf("          within such NOTICE file, excluding those notices that do not\n");
    printf("          pertain to any part of the Derivative Works, in at least one\n");
    printf("          of the following places: within a NOTICE text file distributed\n");
    printf("          as part of the Derivative Works; within the Source form or\n");
    printf("          documentation, if provided along with the Derivative Works; or,\n");
    printf("          within a display generated by the Derivative Works, if and\n");
    printf("          wherever such third-party notices normally appear. The contents\n");
    printf("          of the NOTICE file are for informational purposes only and\n");
    printf("          do not modify the License. You may add Your\n");
    printf("      own attribution notices within Derivative Works that You distribute,\n");
    printf("      alongside or as an addendum to the NOTICE text from the Work, provided\n");
    printf("      that such additional attribution notices cannot be construed\n");
    printf("      as modifying the License.\n\n");
    printf("      You may add Your own copyright statement to Your modifications and\n");
    printf("      may provide additional or different license terms and conditions\n");
    printf("      for use, reproduction, or distribution of Your modifications, or\n");
    printf("      for any such Derivative Works as a whole, provided Your use,\n");
    printf("      reproduction, and distribution of the Work otherwise complies with\n");
    printf("      the conditions stated in this License.\n\n");
    printf("   5. Submission of Contributions. Unless You explicitly state otherwise,\n");
    printf("      any Contribution intentionally submitted for inclusion in the Work\n");
    printf("      by You to the Licensor shall be under the terms and conditions of\n");
    printf("      this License, without any additional terms or conditions.\n");
    printf("      Notwithstanding the above, nothing herein shall supersede or modify\n");
    printf("      the terms of any separate license agreement you may have executed\n");
    printf("      with Licensor regarding such Contributions.\n\n");
    printf("   6. Trademarks. This License does not grant permission to use the trade\n");
    printf("      names, trademarks, service marks, or product names of the Licensor,\n");
    printf("      except as required for reasonable and customary use in describing the\n");
    printf("      origin of the Work and reproducing the content of the NOTICE file.\n\n");
    printf("   7. Disclaimer of Warranty. Unless required by applicable law or\n");
    printf("      agreed to in writing, Licensor provides the Work (and each\n");
    printf("      Contributor provides its Contributions) on an \"AS IS\" BASIS,\n");
    printf("      WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or\n");
    printf("      implied, including, without limitation, any warranties or conditions\n");
    printf("      of TITLE, NON-INFRINGEMENT, MERCHANTABILITY, or FITNESS FOR A\n");
    printf("      PARTICULAR PURPOSE. You are solely responsible for determining the\n");
    printf("      appropriateness of using or redistributing the Work and assume any\n");
    printf("      risks associated with Your exercise of permissions under this License.\n\n");
    printf("   8. Limitation of Liability. In no event and under no legal theory,\n");
    printf("      whether in tort (including negligence), contract, or otherwise,\n");
    printf("      unless required by applicable law (such as deliberate and grossly\n");
    printf("      negligent acts) or agreed to in writing, shall any Contributor be\n");
    printf("      liable to You for damages, including any direct, indirect, special,\n");
    printf("      incidental, or consequential damages of any character arising as a\n");
    printf("      result of this License or out of the use or inability to use the\n");
    printf("      Work (including but not limited to damages for loss of goodwill,\n");
    printf("      work stoppage, computer failure or malfunction, or any and all\n");
    printf("      other commercial damages or losses), even if such Contributor\n");
    printf("      has been advised of the possibility of such damages.\n\n");
    printf("   9. Accepting Warranty or Additional Liability. While redistributing\n");
    printf("      the Work or Derivative Works thereof, You may choose to offer,\n");
    printf("      and charge a fee for, acceptance of support, warranty, indemnity,\n");
    printf("      or other liability obligations and/or rights consistent with this\n");
    printf("      License. However, in accepting such obligations, You may act only\n");
    printf("      on Your own behalf and on Your sole responsibility, not on behalf\n");
    printf("      of any other Contributor, and only if You agree to indemnify,\n");
    printf("      defend, and hold each Contributor harmless for any liability\n");
    printf("      incurred by, or claims asserted against, such Contributor by reason\n");
    printf("      of your accepting any such warranty or additional liability.\n\n");
    printf("   END OF TERMS AND CONDITIONS\n\n");
    printf("   APPENDIX: How to apply the Apache License to your work.\n\n");
    printf("      To apply the Apache License to your work, attach the following\n");
    printf("      boilerplate notice, with the fields enclosed by brackets \"[]\"\n");
    printf("      replaced with your own identifying information. (Don't include\n");
    printf("      the brackets!)  The text should be enclosed in the appropriate\n");
    printf("      comment syntax for the file format. We also recommend that a\n");
    printf("      file or class name and description of purpose be included on the\n");
    printf("      same \"printed page\" as the copyright notice for easier\n");
    printf("      identification within third-party archives.\n\n");
    printf("   Copyright [yyyy] [name of copyright owner]\n\n");
    printf("   Licensed under the Apache License, Version 2.0 (the \"License\");\n");
    printf("   you may not use this file except in compliance with the License.\n");
    printf("   You may obtain a copy of the License at\n\n");
    printf("       http://www.apache.org/licenses/LICENSE-2.0\n\n");
    printf("   Unless required by applicable law or agreed to in writing, software\n");
    printf("   distributed under the License is distributed on an \"AS IS\" BASIS,\n");
    printf("   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n");
    printf("   See the License for the specific language governing permissions and\n");
    printf("   limitations under the License.\n");
    printf("```");
}

void wiew_help() {
    // ı will write soon
}

#endif

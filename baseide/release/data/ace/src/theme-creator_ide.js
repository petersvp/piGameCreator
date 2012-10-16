/* ***** BEGIN LICENSE BLOCK *****
 * Distributed under the BSD license:
 *
 * Copyright (c) 2010, Ajax.org B.V.
 * All rights reserved.
 *
 * Modified by Peter Petrov, 2012
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Ajax.org B.V. nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL AJAX.ORG B.V. BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * ***** END LICENSE BLOCK ***** */

define('ace/theme/creator_ide', ['require', 'exports', 'module', 'ace/lib/dom'], function(require, exports, module) {


exports.isDark = false;
exports.cssClass = "creator_ide";
exports.cssText = ".creator_ide .ace_editor {\
  border: 2px solid rgb(159, 159, 159);\
}\
\
.creator_ide .ace_editor.ace_focus {\
  border: 2px solid #327fbd;\
}\
\
.creator_ide .ace_gutter {\
  background: #f0f0f0;\
  color: #333;\
  border-right: 1px solid #ccc;\
}\
\
.creator_ide .ace_print_margin {\
  width: 1px;\
  background: #e8e8e8;\
}\
\
.creator_ide .ace_fold {\
    background-color: #ccc;\
	border: 1px solid #888; \
}\
\
.creator_ide .ace_scroller {\
  background-color: white;\
}\
\
.creator_ide .ace_cursor {\
  border-left: 2px solid black;\
}\
\
.creator_ide .ace_cursor.ace_overwrite {\
  border-left: 0px;\
  border-bottom: 2px solid black;\
}\
        \
.creator_ide .ace_line .ace_invisible {\
  color: rgb(191, 191, 191);\
}\
\
\
.creator_ide .ace_line .ace_storage {\
}\
\
.creator_ide .ace_line .ace_keyword {\
  color: black;\
  font-weight: bold;\
}\
\
.creator_ide .ace_line .ace_constant {\
  color: #dd8800; \
}\
\
.creator_ide .ace_line .ace_constant.ace_buildin {\
  color: #dd8800; \
}\
\
.creator_ide .ace_line .ace_constant.ace_language {\
  color: #dd8800; \
}\
\
.creator_ide .ace_line .ace_constant.ace_library {\
  color: #dd8800; \
}\
\
.creator_ide .ace_line .ace_invalid {\
  background-color: rgba(255, 0, 0, 0.1);\
  color: #F00;\
  border-radius: 4px;\
}\
\
.creator_ide .ace_line .ace_support.ace_function {\
  color: rgb(60, 76, 114);\
}\
\
.creator_ide .ace_line .ace_support.ace_constant {\
  color: rgb(6, 150, 14);\
}\
\
.creator_ide .ace_line .ace_support.ace_type,\
.creator_ide .ace_line .ace_support.ace_class {\
  color: #C0F\
}\
\
.creator_ide .ace_line .ace_keyword.ace_operator {\
  -color: rgb(104, 118, 135);\
  color: #777;\
  font-weight: normal;\
}\
\
.creator_ide .ace_line .ace_string {\
  color: #aaa;\
}\
\
.creator_ide .ace_line .ace_comment {\
  color: #44BB00; \
  font-style: italic;\
}\
\
.creator_ide .ace_line .ace_comment.ace_doc {\
  color: rgb(0, 102, 255);\
}\
\
.creator_ide .ace_line .ace_comment.ace_doc.ace_tag {\
  color: rgb(0, 62, 205);\
  background: rgba(0, 102, 255, 0.1);\
  font-weight: normal;\
  font-style: normal;\
  border-radius: 4px;\
}\
\
.creator_ide .ace_line .ace_constant.ace_numeric {\
  color: #dd8800;\
}\
\
.creator_ide .ace_line .ace_variable {\
  color: red;\
}\
\
.creator_ide .ace_line .ace_xml_pe {\
  color: rgb(104, 104, 91);\
}\
\
.creator_ide .ace_entity.ace_name.ace_function {\
  color: #0000A2;\
}\
\
\
.creator_ide .ace_markup.ace_heading {\
  color: rgb(12, 7, 255);\
}\
\
.creator_ide .ace_markup.ace_list {\
  color:rgb(185, 6, 144);\
}\
\
.creator_ide .ace_meta.ace_tag {\
  color:rgb(0, 22, 142);\
}\
\
.creator_ide .ace_string.ace_regex {\
  color: rgb(255, 0, 0)\
}\
\
.creator_ide .ace_marker-layer .ace_selection {\
  background: rgb(181, 213, 255);\
}\
.creator_ide.multiselect .ace_selection.start {\
  box-shadow: 0 0 3px 0px white;\
  border-radius: 2px;\
}\
.creator_ide .ace_marker-layer .ace_step {\
  background: rgb(252, 255, 0);\
}\
\
.creator_ide .ace_marker-layer .ace_stack {\
  background: rgb(164, 229, 101);\
}\
\
.creator_ide .ace_marker-layer .ace_bracket {\
  background: #FFC;\
  border-radius: 2px;\
  box-shadow: 0px 1px 8px black;\
}\
\
.creator_ide .ace_marker-layer .ace_active_line {\
  background: #eee;\
}\
\
.creator_ide .ace_gutter_active_line {\
    background-color : #ddd;\
}\
\
.creator_ide .ace_marker-layer .ace_selected_word {\
  background: #FFC;\
  border-radius: 2px;\
  box-shadow: 0px 1px 3px #630;\
}\
\
.creator_ide .ace_indent-guide {\
  background: url(\"data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAAE0lEQVQImWP4////f4bLly//BwAmVgd1/w11/gAAAABJRU5ErkJggg==\") right repeat-y;\
}\
";

var dom = require("../lib/dom");
dom.importCssString(exports.cssText, exports.cssClass);
});

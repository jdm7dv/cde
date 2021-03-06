/*
 * CDE - Common Desktop Environment
 *
 * Copyright (c) 1993-2012, The Open Group. All rights reserved.
 *
 * These libraries and programs are free software; you can
 * redistribute them and/or modify them under the terms of the GNU
 * Lesser General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * These libraries and programs are distributed in the hope that
 * they will be useful, but WITHOUT ANY WARRANTY; without even the
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE. See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with these libraries and programs; if not, write
 * to the Free Software Foundation, Inc., 51 Franklin Street, Fifth
 * Floor, Boston, MA 02110-1301 USA
 */
/* $TOG: options_stubs.C /main/9 1999/03/26 16:56:17 mgreess $ */
/*** DTB_USER_CODE_START vvv Add file header below vvv ***/
/*** DTB_USER_CODE_END   ^^^ Add file header above ^^^ ***/

/*
 * File: options_stubs.c
 * Contains: Module callbacks and connection functions
 *
 * This file was generated by dtcodegen, from module options
 *
 * Any text may be added between the DTB_USER_CODE_START and
 * DTB_USER_CODE_END comments (even non-C code). Descriptive comments
 * are provided only as an aid.
 *
 *  ** EDIT ONLY WITHIN SECTIONS MARKED WITH DTB_USER_CODE COMMENTS.  **
 *  ** ALL OTHER MODIFICATIONS WILL BE OVERWRITTEN. DO NOT MODIFY OR  **
 *  ** DELETE THE GENERATED COMMENTS!                                 **
 */

#include <stdio.h>
#include <Xm/Xm.h>
#include "dtb_utils.h"
#include "dtmailopts.h"
#include "options_ui.h"


/**************************************************************************
 *** DTB_USER_CODE_START
 ***
 *** All necessary header files have been included.
 ***
 *** Add include files, types, macros, externs, and user functions here.
 ***/

#include <DtMail/OptCmd.h>

/*** DTB_USER_CODE_END
 ***
 *** End of user code section
 ***
 **************************************************************************/



void 
opt_dlog_cancelCB(
    Widget widget,
    XtPointer,
    XtPointer
)
{
    /*** DTB_USER_CODE_START vvv Add C variables and code below vvv ***/
  OptCmd *cmd_ptr = NULL;

    /*** DTB_USER_CODE_END   ^^^ Add C variables and code above ^^^ ***/
    
    /*** DTB_USER_CODE_START vvv Add C code below vvv ***/

  XtVaGetValues(widget,
                XmNuserData, &cmd_ptr,
                NULL);

  if(cmd_ptr != NULL)   
    {
      cmd_ptr->update_panes();
      cmd_ptr->unmanage();
    }

    /*** DTB_USER_CODE_END   ^^^ Add C code above ^^^ ***/
}


void 
opt_pane_okCB(
    Widget widget,
    XtPointer,
    XtPointer
)
{
    /*** DTB_USER_CODE_START vvv Add C variables and code below vvv ***/
   OptCmd *cmd_ptr = NULL;

    /*** DTB_USER_CODE_END   ^^^ Add C variables and code above ^^^ ***/
    
    /*** DTB_USER_CODE_START vvv Add C code below vvv ***/
  XtVaGetValues(widget,
                XmNuserData, &cmd_ptr,
                NULL);

  if(cmd_ptr != NULL)
    {
      if (! cmd_ptr->optionsAreValid()) return;
      if (! cmd_ptr->doFileLockingCheck()) return;
      cmd_ptr->update_source();
      cmd_ptr->doVacationCheck();
      cmd_ptr->unmanage();
    }

    /*** DTB_USER_CODE_END   ^^^ Add C code above ^^^ ***/
}


void 
options_applyCB(
    Widget widget,
    XtPointer,
    XtPointer
)
{
    /*** DTB_USER_CODE_START vvv Add C variables and code below vvv ***/

  OptCmd *cmd_ptr = NULL;

    /*** DTB_USER_CODE_END   ^^^ Add C variables and code above ^^^ ***/
    
    /*** DTB_USER_CODE_START vvv Add C code below vvv ***/
  XtVaGetValues(widget,
                XmNuserData, &cmd_ptr,
                NULL);

  if(cmd_ptr != NULL)
    {
      if (! cmd_ptr->optionsAreValid()) return;
      if (! cmd_ptr->doFileLockingCheck()) return;
      cmd_ptr->update_source();
      cmd_ptr->doVacationCheck();
    }

    /*** DTB_USER_CODE_END   ^^^ Add C code above ^^^ ***/
}


void 
start_vacationCB(
    Widget,
    XtPointer,
    XtPointer
)
{
    /*** DTB_USER_CODE_START vvv Add C variables and code below vvv ***/
    /*** DTB_USER_CODE_END   ^^^ Add C variables and code above ^^^ ***/
    
    /*** DTB_USER_CODE_START vvv Add C code below vvv ***/
    /*** DTB_USER_CODE_END   ^^^ Add C code above ^^^ ***/
}


void 
stop_vacationCB(
    Widget,
    XtPointer,
    XtPointer
)
{
    /*** DTB_USER_CODE_START vvv Add C variables and code below vvv ***/
    /*** DTB_USER_CODE_END   ^^^ Add C variables and code above ^^^ ***/
    
    /*** DTB_USER_CODE_START vvv Add C code below vvv ***/
    /*** DTB_USER_CODE_END   ^^^ Add C code above ^^^ ***/
}


void 
vacationOnCB(
    Widget widget,
    XtPointer,
    XtPointer
)
{
    /*** DTB_USER_CODE_START vvv Add C variables and code below vvv ***/
  OptCmd  *cmd_ptr = NULL;

    /*** DTB_USER_CODE_END   ^^^ Add C variables and code above ^^^ ***/
    
    /*** DTB_USER_CODE_START vvv Add C code below vvv ***/

  XtVaGetValues(widget,
                XmNuserData, &cmd_ptr,
                NULL);

  if(cmd_ptr != NULL)
    {
          cmd_ptr->setVacationChanged();
    }

    /*** DTB_USER_CODE_END   ^^^ Add C code above ^^^ ***/
}


void 
vacationOffCB(
    Widget widget,
    XtPointer,
    XtPointer
)
{
    /*** DTB_USER_CODE_START vvv Add C variables and code below vvv ***/
     OptCmd *cmd_ptr = NULL;

    /*** DTB_USER_CODE_END   ^^^ Add C variables and code above ^^^ ***/
    
    /*** DTB_USER_CODE_START vvv Add C code below vvv ***/

  XtVaGetValues(widget,
                XmNuserData, &cmd_ptr,
                NULL);

  if(cmd_ptr != NULL)
    {
          cmd_ptr->setVacationChanged();
    }

    /*** DTB_USER_CODE_END   ^^^ Add C code above ^^^ ***/
}


void 
opt_dlog_resetCB(
    Widget widget,
    XtPointer,
    XtPointer
)
{
    /*** DTB_USER_CODE_START vvv Add C variables and code below vvv ***/
  OptCmd *cmd_ptr = NULL;

    /*** DTB_USER_CODE_END   ^^^ Add C variables and code above ^^^ ***/
    
    /*** DTB_USER_CODE_START vvv Add C code below vvv ***/

  XtVaGetValues(widget,
                XmNuserData, &cmd_ptr,
                NULL);

  if(cmd_ptr != NULL)
    {
      cmd_ptr->update_panes();

    }

    /*** DTB_USER_CODE_END   ^^^ Add C code above ^^^ ***/
}


void 
opt_dlog_HelpCB(
    Widget,
    XtPointer,
    XtPointer
)
{
    /*** DTB_USER_CODE_START vvv Add C variables and code below vvv ***/
    /*** DTB_USER_CODE_END   ^^^ Add C variables and code above ^^^ ***/
    
    /*** DTB_USER_CODE_START vvv Add C code below vvv ***/
    /*** DTB_USER_CODE_END   ^^^ Add C code above ^^^ ***/
}


void 
alias_addCB(
    Widget,
    XtPointer,
    XtPointer
)
{
    /*** DTB_USER_CODE_START vvv Add C variables and code below vvv ***/
    /*** DTB_USER_CODE_END   ^^^ Add C variables and code above ^^^ ***/
    
    /*** DTB_USER_CODE_START vvv Add C code below vvv ***/
    /*** DTB_USER_CODE_END   ^^^ Add C code above ^^^ ***/
}


void 
alias_delCB(
    Widget,
    XtPointer,
    XtPointer
)
{
    /*** DTB_USER_CODE_START vvv Add C variables and code below vvv ***/
    /*** DTB_USER_CODE_END   ^^^ Add C variables and code above ^^^ ***/
    
    /*** DTB_USER_CODE_START vvv Add C code below vvv ***/
    /*** DTB_USER_CODE_END   ^^^ Add C code above ^^^ ***/
}


void 
alias_changeCB(
    Widget,
    XtPointer,
    XtPointer
)
{
    /*** DTB_USER_CODE_START vvv Add C variables and code below vvv ***/
    /*** DTB_USER_CODE_END   ^^^ Add C variables and code above ^^^ ***/
    
    /*** DTB_USER_CODE_START vvv Add C code below vvv ***/
    /*** DTB_USER_CODE_END   ^^^ Add C code above ^^^ ***/
}


void 
message_header_listCB(
    Widget,
    XtPointer clientData,
    XtPointer
)
{
    /*** DTB_USER_CODE_START vvv Add C variables and code below vvv ***/
    DtbOptionsDialogInfo instance = (DtbOptionsDialogInfo)clientData;

    /*** DTB_USER_CODE_END   ^^^ Add C variables and code above ^^^ ***/
    
    /*** DTB_USER_CODE_START vvv Add C code below vvv ***/

    options_set_category_pane(instance->msg_header_pane);

    /*** DTB_USER_CODE_END   ^^^ Add C code above ^^^ ***/
}


void 
message_viewCB(
    Widget,
    XtPointer clientData,
    XtPointer
)
{
    /*** DTB_USER_CODE_START vvv Add C variables and code below vvv ***/
    DtbOptionsDialogInfo instance = (DtbOptionsDialogInfo)clientData;

    /*** DTB_USER_CODE_END   ^^^ Add C variables and code above ^^^ ***/
    
    /*** DTB_USER_CODE_START vvv Add C code below vvv ***/

    options_set_category_pane(instance->msg_view_pane);

    /*** DTB_USER_CODE_END   ^^^ Add C code above ^^^ ***/
}


void 
compose_windowCB(
    Widget,
    XtPointer clientData,
    XtPointer
)
{
    /*** DTB_USER_CODE_START vvv Add C variables and code below vvv ***/
    DtbOptionsDialogInfo instance = (DtbOptionsDialogInfo)clientData;

    /*** DTB_USER_CODE_END   ^^^ Add C variables and code above ^^^ ***/
    
    /*** DTB_USER_CODE_START vvv Add C code below vvv ***/

    options_set_category_pane(instance->compose_win_pane);

    /*** DTB_USER_CODE_END   ^^^ Add C code above ^^^ ***/
}


void 
message_filingCB(
    Widget,
    XtPointer clientData,
    XtPointer
)
{
    /*** DTB_USER_CODE_START vvv Add C variables and code below vvv ***/
    DtbOptionsDialogInfo instance = (DtbOptionsDialogInfo)clientData; 

    /*** DTB_USER_CODE_END   ^^^ Add C variables and code above ^^^ ***/
    
    /*** DTB_USER_CODE_START vvv Add C code below vvv ***/

    options_set_category_pane(instance->msg_filing_pane);

    /*** DTB_USER_CODE_END   ^^^ Add C code above ^^^ ***/
}


void 
vacationCB(
    Widget,
    XtPointer clientData,
    XtPointer
)
{
    /*** DTB_USER_CODE_START vvv Add C variables and code below vvv ***/
    DtbOptionsDialogInfo instance = (DtbOptionsDialogInfo)clientData;  

    /*** DTB_USER_CODE_END   ^^^ Add C variables and code above ^^^ ***/
    
    /*** DTB_USER_CODE_START vvv Add C code below vvv ***/

    options_set_category_pane(instance->vacation_pane); 

    /*** DTB_USER_CODE_END   ^^^ Add C code above ^^^ ***/
}


void 
templatesCB(
    Widget,
    XtPointer clientData,
    XtPointer
)
{
    /*** DTB_USER_CODE_START vvv Add C variables and code below vvv ***/
    DtbOptionsDialogInfo instance = (DtbOptionsDialogInfo)clientData;   

    /*** DTB_USER_CODE_END   ^^^ Add C variables and code above ^^^ ***/
    
    /*** DTB_USER_CODE_START vvv Add C code below vvv ***/

    options_set_category_pane(instance->templates_pane);  

    /*** DTB_USER_CODE_END   ^^^ Add C code above ^^^ ***/
}


void 
aliasesCB(
    Widget,
    XtPointer clientData,
    XtPointer
)
{
    /*** DTB_USER_CODE_START vvv Add C variables and code below vvv ***/
    DtbOptionsDialogInfo instance = (DtbOptionsDialogInfo)clientData;    

    /*** DTB_USER_CODE_END   ^^^ Add C variables and code above ^^^ ***/
    
    /*** DTB_USER_CODE_START vvv Add C code below vvv ***/

    options_set_category_pane(instance->aliases_pane);   

    /*** DTB_USER_CODE_END   ^^^ Add C code above ^^^ ***/
}


void 
advancedCB(
    Widget,
    XtPointer clientData,
    XtPointer
)
{
    /*** DTB_USER_CODE_START vvv Add C variables and code below vvv ***/
    DtbOptionsDialogInfo instance = (DtbOptionsDialogInfo)clientData;     

    /*** DTB_USER_CODE_END   ^^^ Add C variables and code above ^^^ ***/
    
    /*** DTB_USER_CODE_START vvv Add C code below vvv ***/

    options_set_category_pane(instance->advanced_pane);    

    /*** DTB_USER_CODE_END   ^^^ Add C code above ^^^ ***/
}



void 
printingCB(
    Widget,
    XtPointer clientData,
    XtPointer
)
{
    /*** DTB_USER_CODE_START vvv Add C variables and code below vvv ***/
    DtbOptionsDialogInfo instance = (DtbOptionsDialogInfo)clientData;     

    /*** DTB_USER_CODE_END   ^^^ Add C variables and code above ^^^ ***/
    
    /*** DTB_USER_CODE_START vvv Add C code below vvv ***/

    options_set_category_pane(instance->printing_pane);    

    /*** DTB_USER_CODE_END   ^^^ Add C code above ^^^ ***/
}


void 
mailretrievalCB(
    Widget,
    XtPointer clientData,
    XtPointer
)
{
    /*** DTB_USER_CODE_START vvv Add C variables and code below vvv ***/
    DtbOptionsDialogInfo instance = (DtbOptionsDialogInfo)clientData;     

    /*** DTB_USER_CODE_END   ^^^ Add C variables and code above ^^^ ***/
    
    /*** DTB_USER_CODE_START vvv Add C code below vvv ***/

    options_set_category_pane(instance->mailretrieval_pane);    

    /*** DTB_USER_CODE_END   ^^^ Add C code above ^^^ ***/
}



/**************************************************************************
 *** DTB_USER_CODE_START
 ***
 *** All automatically-generated data and functions have been defined.
 ***
 *** Add new functions here, or at the top of the file.
 ***/

/*** DTB_USER_CODE_END
 ***
 *** End of user code section
 ***
 **************************************************************************/



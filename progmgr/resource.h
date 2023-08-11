/* * * * * * * *\
	RESOURCE.H -
		Copyright (c) 2023 freedom7341, Vortesys
	DESCRIPTION -
		Program Manager's resource collection.
		** NO DEPENDENCIES **
	LICENSE INFORMATION -
		MIT License, see LICENSE.txt in the root folder
\* * * * * * * */

/* Pragmas */
#pragma once

/* Icon Library */
// Primary, 1-9
#define IDI_PROGMGR		1
#define IDI_PROGGRP		2
#define IDI_PROGITM		3
// Secondary, 10-19
#define IDI_COMMS		10
#define IDI_CONSOLE		11
#define IDI_DOCUMENT	12
#define IDI_SPREADSHEET	13
// Tertiary, 20+
#define IDI_SUPERMAN	20

/* Menus and Commands */
// Context Menus and Accelerators
#define IDM_MAIN					100
#define IDM_ITEM					101
#define IDM_GROUP					102
#define IDA_ACCELS					103
// File, 110-119
#define IDM_FILE					110
#define IDM_FILE_NEW				111
#define IDM_FILE_OPEN				112
#define IDM_FILE_MOVE				113
#define IDM_FILE_COPY				114
#define IDM_FILE_DELETE				115
#define IDM_FILE_PROPS				116
#define IDM_FILE_RUN				117
#define IDM_FILE_EXIT				118
// Options, 130-149
#define IDM_OPTIONS					130
#define IDM_OPTIONS_AUTOARRANGE		131
#define IDM_OPTIONS_MINONRUN		132
#define IDM_OPTIONS_TOPMOST			133
#define IDM_OPTIONS_SHOWUSERNAME	134
#define IDM_OPTIONS_SAVESETTINGS	135
#define IDM_OPTIONS_SAVENOW			136
// Window, 150-169, 5000+
#define IDM_WINDOW					150
#define IDM_WINDOW_CASCADE			151
#define IDM_WINDOW_TILE				152
#define IDM_WINDOW_TILEHORIZONTALLY	153
#define IDM_WINDOW_ARRANGEICONS		154
#define IDM_WINDOW_CHILDSTART		5000
// Help, 170-179
#define IDM_HELP					170
#define IDM_HELP_INDEX				171
#define IDM_HELP_ABOUT				172
// Miscellaneous, 180-199
#define IDM_SHUTDOWN				180
#define IDM_TASKMGR					181
// Desktop Menus, 1000 - 1020
#define IDM_DESK					200
#define IDM_DESK_VIEW				201
#define IDM_DESK_SORT				202
#define IDM_DESK_SCREENRES			203
#define IDM_DESK_PERSONALIZE		204

/* Dialogs */
#define IDD_ITEM	1
#define IDD_GROUP	2

/* String Table */
#define IDS_APPTITLE			1
#define IDS_PMCLASS				2
#define IDS_DTCLASS				3
#define IDS_GRPCLASS			4
#define IDS_WEBSITE				5
// Menu Commands
#define IDS_RUN					100
#define IDS_TASKMGR				101
#define IDS_EXIT				102
#define IDS_SHUTDOWN			103
// General Dialog strings
#define IDS_DLG_OK				200
#define IDS_DLG_CANCEL			201
#define IDS_DLG_BROWSE			202
// Icon section strings
#define IDS_DLG_ICON			203
#define IDS_DLG_CHICON			204
// Properties section strings
#define IDS_DLG_PROPS			205
#define IDS_DLG_NAME			206
#define IDS_DLG_DIRECTORY		207
#define IDS_DLG_COMMONGRP		208
// Advanced section strings
#define IDS_DLG_ADVANCED		209
#define IDS_DLG_WORKINGDIR		210
#define IDS_DLG_HOTKEY			211
// Dialog title strings
#define IDS_DLT_GRP_PROPS		300
#define IDS_DLT_GRP_NEW			301
#define IDS_DLT_ITEM_PROPS		302
#define IDS_DLT_ITEM_NEW		303

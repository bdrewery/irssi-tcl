int irssi_dir(ClientData clientData, Tcl_Interp *interp, int objc, Tcl_Obj *const objv[]);
int putserv_raw(ClientData clientData, Tcl_Interp *interp, int objc, Tcl_Obj *const objv[]);
int putchan_raw(ClientData clientData, Tcl_Interp *interp, int objc, Tcl_Obj *const objv[]);
int irssi_print(ClientData clientData, Tcl_Interp *interp, int objc, Tcl_Obj *const objv[]);
int settings_get(ClientData clientData, Tcl_Interp *interp, int objc, Tcl_Obj *const objv[]);
int settings_add_str_tcl(ClientData clientData, Tcl_Interp *interp, int objc, Tcl_Obj *const objv[]);

typedef struct {
	const char *cmd;
	const void *func;
} TclCmd;

static const TclCmd TclCmdTable[] = {
	{"putserv_raw", putserv_raw},
	{"putchan_raw", putchan_raw},
	{"irssi_print", irssi_print},
	{"settings_get", settings_get},
	{"settings_add_str", settings_add_str_tcl},
	{"irssi_dir", irssi_dir},
	{NULL, NULL}
};

R_RegisterCCallable("RGtk2", "asCStringArray", ((DL_FUNC)asCStringArray)); 
R_RegisterCCallable("RGtk2", "asCString", ((DL_FUNC)asCString)); 
R_RegisterCCallable("RGtk2", "asCCharacter", ((DL_FUNC)asCCharacter)); 
R_RegisterCCallable("RGtk2", "asRCharacter", ((DL_FUNC)asRCharacter)); 
R_RegisterCCallable("RGtk2", "asRString", ((DL_FUNC)asRString)); 
R_RegisterCCallable("RGtk2", "asRUnsigned", ((DL_FUNC)asRUnsigned)); 
R_RegisterCCallable("RGtk2", "asREnum", ((DL_FUNC)asREnum)); 
R_RegisterCCallable("RGtk2", "asRFlag", ((DL_FUNC)asRFlag)); 
R_RegisterCCallable("RGtk2", "asCFlag", ((DL_FUNC)asCFlag)); 
R_RegisterCCallable("RGtk2", "asCEnum", ((DL_FUNC)asCEnum)); 
R_RegisterCCallable("RGtk2", "toRPointerWithFinalizer", ((DL_FUNC)toRPointerWithFinalizer)); 
R_RegisterCCallable("RGtk2", "toRPointerWithRef", ((DL_FUNC)toRPointerWithRef)); 
R_RegisterCCallable("RGtk2", "getPtrValueWithRef", ((DL_FUNC)getPtrValueWithRef)); 
R_RegisterCCallable("RGtk2", "asRGQuark", ((DL_FUNC)asRGQuark)); 
R_RegisterCCallable("RGtk2", "asCGTimeVal", ((DL_FUNC)asCGTimeVal)); 
R_RegisterCCallable("RGtk2", "asRGTimeVal", ((DL_FUNC)asRGTimeVal)); 
R_RegisterCCallable("RGtk2", "asCGString", ((DL_FUNC)asCGString)); 
R_RegisterCCallable("RGtk2", "toCGList", ((DL_FUNC)toCGList)); 
R_RegisterCCallable("RGtk2", "asRGList", ((DL_FUNC)asRGList)); 
R_RegisterCCallable("RGtk2", "asRGListWithRef", ((DL_FUNC)asRGListWithRef)); 
R_RegisterCCallable("RGtk2", "asRGListWithFinalizer", ((DL_FUNC)asRGListWithFinalizer)); 
R_RegisterCCallable("RGtk2", "asRGListConv", ((DL_FUNC)asRGListConv)); 
R_RegisterCCallable("RGtk2", "toCGSList", ((DL_FUNC)toCGSList)); 
R_RegisterCCallable("RGtk2", "asRGSList", ((DL_FUNC)asRGSList)); 
R_RegisterCCallable("RGtk2", "asRGSListWithRef", ((DL_FUNC)asRGSListWithRef)); 
R_RegisterCCallable("RGtk2", "asRGSListWithFinalizer", ((DL_FUNC)asRGSListWithFinalizer)); 
R_RegisterCCallable("RGtk2", "asRGSListConv", ((DL_FUNC)asRGSListConv)); 
R_RegisterCCallable("RGtk2", "asRGError", ((DL_FUNC)asRGError)); 
R_RegisterCCallable("RGtk2", "asCGError", ((DL_FUNC)asCGError)); 
R_RegisterCCallable("RGtk2", "R_setGValueFromSValue", ((DL_FUNC)R_setGValueFromSValue)); 
R_RegisterCCallable("RGtk2", "createGValueFromSValue", ((DL_FUNC)createGValueFromSValue)); 
R_RegisterCCallable("RGtk2", "initGValueFromSValue", ((DL_FUNC)initGValueFromSValue)); 
R_RegisterCCallable("RGtk2", "initGValueFromVector", ((DL_FUNC)initGValueFromVector)); 
R_RegisterCCallable("RGtk2", "asRGValue", ((DL_FUNC)asRGValue)); 
R_RegisterCCallable("RGtk2", "asCGValue", ((DL_FUNC)asCGValue)); 
R_RegisterCCallable("RGtk2", "asRGType", ((DL_FUNC)asRGType)); 
R_RegisterCCallable("RGtk2", "asCGParamSpec", ((DL_FUNC)asCGParamSpec)); 
R_RegisterCCallable("RGtk2", "asRGParamSpec", ((DL_FUNC)asRGParamSpec)); 
R_RegisterCCallable("RGtk2", "asCGClosure", ((DL_FUNC)asCGClosure)); 
R_RegisterCCallable("RGtk2", "asRGClosure", ((DL_FUNC)asRGClosure)); 
R_RegisterCCallable("RGtk2", "toRPointerWithSink", ((DL_FUNC)toRPointerWithSink)); 
R_RegisterCCallable("RGtk2", "asRGListWithSink", ((DL_FUNC)asRGListWithSink)); 
R_RegisterCCallable("RGtk2", "asRGSListWithSink", ((DL_FUNC)asRGSListWithSink)); 
R_RegisterCCallable("RGtk2", "S_GCompareFunc", ((DL_FUNC)S_GCompareFunc)); 
R_RegisterCCallable("RGtk2", "S_GSourceFunc", ((DL_FUNC)S_GSourceFunc)); 
R_RegisterCCallable("RGtk2", "R_createGClosure", ((DL_FUNC)R_createGClosure)); 
R_RegisterCCallable("RGtk2", "r_gtk_sexp_get_type", ((DL_FUNC)r_gtk_sexp_get_type)); 
R_RegisterCCallable("RGtk2", "r_gtk_param_spec_sexp_get_type", ((DL_FUNC)r_gtk_param_spec_sexp_get_type)); 
R_RegisterCCallable("RGtk2", "S_gobject_class_init", ((DL_FUNC)S_gobject_class_init)); 
R_RegisterCCallable("RGtk2", "retByVal", ((DL_FUNC)retByVal)); 
R_RegisterCCallable("RGtk2", "R_createCBData", ((DL_FUNC)R_createCBData)); 
R_RegisterCCallable("RGtk2", "R_freeCBData", ((DL_FUNC)R_freeCBData)); 
R_RegisterCCallable("RGtk2", "getSValueGType", ((DL_FUNC)getSValueGType)); 
R_RegisterCCallable("RGtk2", "R_internal_getInterfaces", ((DL_FUNC)R_internal_getInterfaces)); 
R_RegisterCCallable("RGtk2", "R_internal_getGTypeAncestors", ((DL_FUNC)R_internal_getGTypeAncestors)); 
R_RegisterCCallable("RGtk2", "propertyConstructor", ((DL_FUNC)propertyConstructor)); 
R_RegisterCCallable("RGtk2", "R_setGObjectProps", ((DL_FUNC)R_setGObjectProps)); 
R_RegisterCCallable("RGtk2", "R_getGObjectProps", ((DL_FUNC)R_getGObjectProps)); 
R_RegisterCCallable("RGtk2", "GSListFreeStrings", ((DL_FUNC)GSListFreeStrings)); 
R_RegisterCCallable("RGtk2", "GListFreeStrings", ((DL_FUNC)GListFreeStrings)); 

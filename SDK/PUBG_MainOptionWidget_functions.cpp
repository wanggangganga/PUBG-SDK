// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MainOptionWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MainOptionWidget.MainOptionWidget_C.ClearOptionButtonsColors
// (Public, BlueprintCallable, BlueprintEvent)

void UMainOptionWidget_C::ClearOptionButtonsColors()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99036);

	UMainOptionWidget_C_ClearOptionButtonsColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.PopupButtonClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupButtonID                 ButtonID                       (Parm, ZeroConstructor, IsPlainOldData)

void UMainOptionWidget_C::PopupButtonClicked(EPopupButtonID ButtonID)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99028);

	UMainOptionWidget_C_PopupButtonClicked_Params params;
	params.ButtonID = ButtonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.Get_ResetButton_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMainOptionWidget_C::Get_ResetButton_bIsEnabled_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99025);

	UMainOptionWidget_C_Get_ResetButton_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainOptionWidget.MainOptionWidget_C.Get_OkButton_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMainOptionWidget_C::Get_OkButton_bIsEnabled_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99023);

	UMainOptionWidget_C_Get_OkButton_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainOptionWidget.MainOptionWidget_C.ShowMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (Parm)

void UMainOptionWidget_C::ShowMessage(const struct FText& Message)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99016);

	UMainOptionWidget_C_ShowMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.OnReset
// (Public, BlueprintCallable, BlueprintEvent)

void UMainOptionWidget_C::OnReset()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99014);

	UMainOptionWidget_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.OnDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UMainOptionWidget_C::OnDefault()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99012);

	UMainOptionWidget_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.ChangeOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainOptionWidget_C::ChangeOption(int Index)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99007);

	UMainOptionWidget_C_ChangeOption_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.OnApply
// (Public, BlueprintCallable, BlueprintEvent)

void UMainOptionWidget_C::OnApply()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99005);

	UMainOptionWidget_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.CloseMainOption
// (Public, BlueprintCallable, BlueprintEvent)

void UMainOptionWidget_C::CloseMainOption()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99000);

	UMainOptionWidget_C_CloseMainOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.IsApplyButtonEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMainOptionWidget_C::IsApplyButtonEnabled()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(98992);

	UMainOptionWidget_C_IsApplyButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainOptionWidget.MainOptionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainOptionWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(98991);

	UMainOptionWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionButton_3_K2Node_ComponentBoundEvent_423_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMainOptionWidget_C::BndEvt__OptionButton_3_K2Node_ComponentBoundEvent_423_OnClicked__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(98990);

	UMainOptionWidget_C_BndEvt__OptionButton_3_K2Node_ComponentBoundEvent_423_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionButton_4_K2Node_ComponentBoundEvent_487_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMainOptionWidget_C::BndEvt__OptionButton_4_K2Node_ComponentBoundEvent_487_OnClicked__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(98989);

	UMainOptionWidget_C_BndEvt__OptionButton_4_K2Node_ComponentBoundEvent_487_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionButton_5_K2Node_ComponentBoundEvent_515_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMainOptionWidget_C::BndEvt__OptionButton_5_K2Node_ComponentBoundEvent_515_OnClicked__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(98988);

	UMainOptionWidget_C_BndEvt__OptionButton_5_K2Node_ComponentBoundEvent_515_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionSettingsButotn_K2Node_ComponentBoundEvent_253_OnButtonDown__DelegateSignature
// (BlueprintEvent)

void UMainOptionWidget_C::BndEvt__OptionSettingsButotn_K2Node_ComponentBoundEvent_253_OnButtonDown__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(98987);

	UMainOptionWidget_C_BndEvt__OptionSettingsButotn_K2Node_ComponentBoundEvent_253_OnButtonDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_344_OnButtonDown__DelegateSignature
// (BlueprintEvent)

void UMainOptionWidget_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_344_OnButtonDown__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(98986);

	UMainOptionWidget_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_344_OnButtonDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_362_OnButtonDown__DelegateSignature
// (BlueprintEvent)

void UMainOptionWidget_C::BndEvt__ApplyButton_K2Node_ComponentBoundEvent_362_OnButtonDown__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(98985);

	UMainOptionWidget_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_362_OnButtonDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_403_OnButtonDown__DelegateSignature
// (BlueprintEvent)

void UMainOptionWidget_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_403_OnButtonDown__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(98984);

	UMainOptionWidget_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_403_OnButtonDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_433_OnButtonDown__DelegateSignature
// (BlueprintEvent)

void UMainOptionWidget_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_433_OnButtonDown__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(98983);

	UMainOptionWidget_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_433_OnButtonDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.OnHiddenWidget
// (BlueprintCallable, BlueprintEvent)

void UMainOptionWidget_C::OnHiddenWidget()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(98982);

	UMainOptionWidget_C_OnHiddenWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.XBoxOnOk
// (BlueprintCallable, BlueprintEvent)

void UMainOptionWidget_C::XBoxOnOk()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(98981);

	UMainOptionWidget_C_XBoxOnOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainOptionWidget_C::Destruct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(98980);

	UMainOptionWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionButton3_K2Node_ComponentBoundEvent_144_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMainOptionWidget_C::BndEvt__OptionButton3_K2Node_ComponentBoundEvent_144_OnClicked__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(98979);

	UMainOptionWidget_C_BndEvt__OptionButton3_K2Node_ComponentBoundEvent_144_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.ExecuteUbergraph_MainOptionWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMainOptionWidget_C::ExecuteUbergraph_MainOptionWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(98962);

	UMainOptionWidget_C_ExecuteUbergraph_MainOptionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

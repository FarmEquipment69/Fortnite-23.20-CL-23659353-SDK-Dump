// Class /Script/Engine.KismetInputLibrary
// Size: 0x28
class UKismetInputLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.KismetInputLibrary.PointerEvent_IsTouchEvent (Underlying native function: PointerEvent_IsTouchEvent 0x9e0c20c)
	static bool PointerEventIsTouchEvent(struct FPointerEvent& Input); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.PointerEvent_IsMouseButtonDown (Underlying native function: PointerEvent_IsMouseButtonDown 0x9e0c080)
	static bool PointerEventIsMouseButtonDown(struct FPointerEvent& Input, struct FKey& MouseButton); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.PointerEvent_GetWheelDelta (Underlying native function: PointerEvent_GetWheelDelta 0x9e0bfb0)
	static float PointerEventGetWheelDelta(struct FPointerEvent& Input); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.PointerEvent_GetUserIndex (Underlying native function: PointerEvent_GetUserIndex 0x9e0beec)
	static int PointerEventGetUserIndex(struct FPointerEvent& Input); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.PointerEvent_GetTouchpadIndex (Underlying native function: PointerEvent_GetTouchpadIndex 0x9e0be28)
	static int PointerEventGetTouchpadIndex(struct FPointerEvent& Input); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.PointerEvent_GetScreenSpacePosition (Underlying native function: PointerEvent_GetScreenSpacePosition 0x9e0bd60)
	static struct FVector2D PointerEventGetScreenSpacePosition(struct FPointerEvent& Input); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.PointerEvent_GetPointerIndex (Underlying native function: PointerEvent_GetPointerIndex 0x9e0bc9c)
	static int PointerEventGetPointerIndex(struct FPointerEvent& Input); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.PointerEvent_GetLastScreenSpacePosition (Underlying native function: PointerEvent_GetLastScreenSpacePosition 0x9e0bbd4)
	static struct FVector2D PointerEventGetLastScreenSpacePosition(struct FPointerEvent& Input); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.PointerEvent_GetGestureType (Underlying native function: PointerEvent_GetGestureType 0x9e0badc)
	static enum ESlateGesture PointerEventGetGestureType(struct FPointerEvent& Input); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.PointerEvent_GetGestureDelta (Underlying native function: PointerEvent_GetGestureDelta 0x9e0ba10)
	static struct FVector2D PointerEventGetGestureDelta(struct FPointerEvent& Input); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.PointerEvent_GetEffectingButton (Underlying native function: PointerEvent_GetEffectingButton 0x9e0b8e4)
	static struct FKey PointerEventGetEffectingButton(struct FPointerEvent& Input); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.PointerEvent_GetCursorDelta (Underlying native function: PointerEvent_GetCursorDelta 0x9e0b81c)
	static struct FVector2D PointerEventGetCursorDelta(struct FPointerEvent& Input); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.ModifierKeysState_IsShiftDown (Underlying native function: ModifierKeysState_IsShiftDown 0x9e07708)
	static bool ModifierKeysStateIsShiftDown(struct FSlateModifierKeysState& KeysState); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.ModifierKeysState_IsControlDown (Underlying native function: ModifierKeysState_IsControlDown 0x9e07680)
	static bool ModifierKeysStateIsControlDown(struct FSlateModifierKeysState& KeysState); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.ModifierKeysState_IsCommandDown (Underlying native function: ModifierKeysState_IsCommandDown 0x9e075f4)
	static bool ModifierKeysStateIsCommandDown(struct FSlateModifierKeysState& KeysState); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.ModifierKeysState_IsAltDown (Underlying native function: ModifierKeysState_IsAltDown 0x9e07568)
	static bool ModifierKeysStateIsAltDown(struct FSlateModifierKeysState& KeysState); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.Key_IsVectorAxis (Underlying native function: Key_IsVectorAxis 0x9dfd458)
	static bool KeyIsVectorAxis(struct FKey& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.Key_IsValid (Underlying native function: Key_IsValid 0x9dfd39c)
	static bool KeyIsValid(struct FKey& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.Key_IsMouseButton (Underlying native function: Key_IsMouseButton 0x9dfd2e0)
	static bool KeyIsMouseButton(struct FKey& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.Key_IsModifierKey (Underlying native function: Key_IsModifierKey 0x9dfd224)
	static bool KeyIsModifierKey(struct FKey& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.Key_IsKeyboardKey (Underlying native function: Key_IsKeyboardKey 0x9dfd138)
	static bool KeyIsKeyboardKey(struct FKey& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.Key_IsGamepadKey (Underlying native function: Key_IsGamepadKey 0x9dfd07c)
	static bool KeyIsGamepadKey(struct FKey& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.Key_IsDigital (Underlying native function: Key_IsDigital 0x9dfcfc0)
	static bool KeyIsDigital(struct FKey& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.Key_IsButtonAxis (Underlying native function: Key_IsButtonAxis 0x9dfcf04)
	static bool KeyIsButtonAxis(struct FKey& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.Key_IsAxis3D (Underlying native function: Key_IsAxis3D 0x9dfce48)
	static bool KeyIsAxis3D(struct FKey& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.Key_IsAxis2D (Underlying native function: Key_IsAxis2D 0x9dfcd8c)
	static bool KeyIsAxis2D(struct FKey& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.Key_IsAxis1D (Underlying native function: Key_IsAxis1D 0x9dfccd0)
	static bool KeyIsAxis1D(struct FKey& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.Key_IsAnalog (Underlying native function: Key_IsAnalog 0x9dfcc14)
	static bool KeyIsAnalog(struct FKey& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.Key_GetNavigationDirectionFromKey (Underlying native function: Key_GetNavigationDirectionFromKey 0x9dfcb08)
	static enum EUINavigation KeyGetNavigationDirectionFromKey(struct FKeyEvent& InKeyEvent); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.Key_GetNavigationDirectionFromAnalog (Underlying native function: Key_GetNavigationDirectionFromAnalog 0x9dfca38)
	static enum EUINavigation KeyGetNavigationDirectionFromAnalog(struct FAnalogInputEvent& InAnalogEvent); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.Key_GetNavigationActionFromKey (Underlying native function: Key_GetNavigationActionFromKey 0x9dfc92c)
	static enum EUINavigationAction KeyGetNavigationActionFromKey(struct FKeyEvent& InKeyEvent); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.Key_GetNavigationAction (Underlying native function: Key_GetNavigationAction 0x9dfc85c)
	static enum EUINavigationAction KeyGetNavigationAction(struct FKey& InKey); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.Key_GetDisplayName (Underlying native function: Key_GetDisplayName 0x9dfc700)
	static struct FText KeyGetDisplayName(struct FKey& Key, bool& bLongDisplayName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.InputEvent_IsShiftDown (Underlying native function: InputEvent_IsShiftDown 0x9df9208)
	static bool InputEventIsShiftDown(struct FInputEvent& Input); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.InputEvent_IsRightShiftDown (Underlying native function: InputEvent_IsRightShiftDown 0x9df9154)
	static bool InputEventIsRightShiftDown(struct FInputEvent& Input); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.InputEvent_IsRightControlDown (Underlying native function: InputEvent_IsRightControlDown 0x9df90a0)
	static bool InputEventIsRightControlDown(struct FInputEvent& Input); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.InputEvent_IsRightCommandDown (Underlying native function: InputEvent_IsRightCommandDown 0x9df8fec)
	static bool InputEventIsRightCommandDown(struct FInputEvent& Input); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.InputEvent_IsRightAltDown (Underlying native function: InputEvent_IsRightAltDown 0x9df8f38)
	static bool InputEventIsRightAltDown(struct FInputEvent& Input); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.InputEvent_IsRepeat (Underlying native function: InputEvent_IsRepeat 0x9df8e88)
	static bool InputEventIsRepeat(struct FInputEvent& Input); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.InputEvent_IsLeftShiftDown (Underlying native function: InputEvent_IsLeftShiftDown 0x9df8dd4)
	static bool InputEventIsLeftShiftDown(struct FInputEvent& Input); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.InputEvent_IsLeftControlDown (Underlying native function: InputEvent_IsLeftControlDown 0x9df8d20)
	static bool InputEventIsLeftControlDown(struct FInputEvent& Input); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.InputEvent_IsLeftCommandDown (Underlying native function: InputEvent_IsLeftCommandDown 0x9df8c6c)
	static bool InputEventIsLeftCommandDown(struct FInputEvent& Input); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.InputEvent_IsLeftAltDown (Underlying native function: InputEvent_IsLeftAltDown 0x9df8bb8)
	static bool InputEventIsLeftAltDown(struct FInputEvent& Input); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.InputEvent_IsControlDown (Underlying native function: InputEvent_IsControlDown 0x9df8b04)
	static bool InputEventIsControlDown(struct FInputEvent& Input); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.InputEvent_IsCommandDown (Underlying native function: InputEvent_IsCommandDown 0x9df8a50)
	static bool InputEventIsCommandDown(struct FInputEvent& Input); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.InputEvent_IsAltDown (Underlying native function: InputEvent_IsAltDown 0x9df899c)
	static bool InputEventIsAltDown(struct FInputEvent& Input); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.InputChord_GetDisplayName (Underlying native function: InputChord_GetDisplayName 0x9df8878)
	static struct FText InputChordGetDisplayName(struct FInputChord& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.GetUserIndex (Underlying native function: GetUserIndex 0x9df70c4)
	static int GetUserIndex(struct FKeyEvent& Input); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.GetModifierKeysState (Underlying native function: GetModifierKeysState 0x9df3ea8)
	static struct FSlateModifierKeysState GetModifierKeysState(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.GetKey (Underlying native function: GetKey 0x9df34f0)
	static struct FKey GetKey(struct FKeyEvent& Input); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.GetAnalogValue (Underlying native function: GetAnalogValue 0x9df14a0)
	static float GetAnalogValue(struct FAnalogInputEvent& Input); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.EqualEqual_KeyKey (Underlying native function: EqualEqual_KeyKey 0x9dedb78)
	static bool EqualEqualKeyKey(struct FKey& A, struct FKey& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.EqualEqual_InputChordInputChord (Underlying native function: EqualEqual_InputChordInputChord 0x9deda70)
	static bool EqualEqualInputChordInputChord(struct FInputChord& A, struct FInputChord& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInputLibrary.CalibrateTilt (Underlying native function: CalibrateTilt 0x9de14e4)
	static void CalibrateTilt(); // (Final | Native | Static | Public | BlueprintCallable)
};


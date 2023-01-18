// Class /Script/Engine.KismetStringLibrary
// Size: 0x28
class UKismetStringLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.KismetStringLibrary.TrimTrailing (Underlying native function: TrimTrailing 0x9e1b4cc)
	static struct FString TrimTrailing(struct FString& SourceString); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Trim (Underlying native function: Trim 0x9e1b358)
	static struct FString Trim(struct FString& SourceString); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.ToUpper (Underlying native function: ToUpper 0x9e1aaec)
	static struct FString ToUpper(struct FString& SourceString); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.ToLower (Underlying native function: ToLower 0x9e1a7cc)
	static struct FString ToLower(struct FString& SourceString); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.TimeSecondsToString (Underlying native function: TimeSecondsToString 0x9e1a2d4)
	static struct FString TimeSecondsToString(float& InSeconds); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.StartsWith (Underlying native function: StartsWith 0x9e1902c)
	static bool StartsWith(struct FString& SourceString, struct FString& InPrefix, struct TEnumAsByte<ESearchCase>& SearchCase); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Split (Underlying native function: Split 0xecbffc)
	static bool Split(struct FString& SourceString, struct FString& InStr, struct FString& LeftS, struct FString& RightS, struct TEnumAsByte<ESearchCase>& SearchCase, struct TEnumAsByte<ESearchDir>& SearchDir); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.RightPad (Underlying native function: RightPad 0x9e13a34)
	static struct FString RightPad(struct FString& SourceString, int& ChCount); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.RightChop (Underlying native function: RightChop 0x9e1387c)
	static struct FString RightChop(struct FString& SourceString, int& Count); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Right (Underlying native function: Right 0x9e136c4)
	static struct FString Right(struct FString& SourceString, int& Count); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Reverse (Underlying native function: Reverse 0x9e1347c)
	static struct FString Reverse(struct FString& SourceString); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.ReplaceInline (Underlying native function: ReplaceInline 0x9e12cd4)
	static int ReplaceInline(struct FString& SourceString, struct FString& SearchText, struct FString& ReplacementText, struct TEnumAsByte<ESearchCase>& SearchCase); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetStringLibrary.Replace (Underlying native function: Replace 0xecd450)
	static struct FString Replace(struct FString& SourceString, struct FString& From, struct FString& To, struct TEnumAsByte<ESearchCase>& SearchCase); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.ParseIntoArray (Underlying native function: ParseIntoArray 0x9e0aa4c)
	static struct TArray<struct FString> ParseIntoArray(struct FString& SourceString, struct FString& Delimiter, bool& CullEmptyStrings); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.NotEqual_StrStr (Underlying native function: NotEqual_StrStr 0x2536564)
	static bool NotEqualStrStr(struct FString& A, struct FString& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.NotEqual_StriStri (Underlying native function: NotEqual_StriStri 0x25d4ebc)
	static bool NotEqualStriStri(struct FString& A, struct FString& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Mid (Underlying native function: Mid 0x9df5c28)
	static struct FString Mid(struct FString& SourceString, int& Start, int& Count); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.MatchesWildcard (Underlying native function: MatchesWildcard 0x9e03234)
	static bool MatchesWildcard(struct FString& SourceString, struct FString& Wildcard, struct TEnumAsByte<ESearchCase>& SearchCase); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Len (Underlying native function: Len 0x9dfdb00)
	static int Len(struct FString& S); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.LeftPad (Underlying native function: LeftPad 0x9dfd948)
	static struct FString LeftPad(struct FString& SourceString, int& ChCount); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.LeftChop (Underlying native function: LeftChop 0xecd6b4)
	static struct FString LeftChop(struct FString& SourceString, int& Count); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Left (Underlying native function: Left 0x9dfd620)
	static struct FString Left(struct FString& SourceString, int& Count); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.JoinStringArray (Underlying native function: JoinStringArray 0x9dfabd4)
	static struct FString JoinStringArray(struct TArray<struct FString>& SourceArray, struct FString& Separator); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.IsNumeric (Underlying native function: IsNumeric 0x9dfa020)
	static bool IsNumeric(struct FString& SourceString); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.IsEmpty (Underlying native function: IsEmpty 0x9df9b0c)
	static bool IsEmpty(struct FString& InString); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.GetSubstring (Underlying native function: GetSubstring 0x9df5c28)
	static struct FString GetSubstring(struct FString& SourceString, int& StartIndex, int& Length); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.GetCharacterAsNumber (Underlying native function: GetCharacterAsNumber 0x9df1be8)
	static int GetCharacterAsNumber(struct FString& SourceString, int& Index); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.GetCharacterArrayFromString (Underlying native function: GetCharacterArrayFromString 0x9df196c)
	static struct TArray<struct FString> GetCharacterArrayFromString(struct FString& SourceString); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.FindSubstring (Underlying native function: FindSubstring 0x9df0560)
	static int FindSubstring(struct FString& SearchIn, struct FString& Substring, bool& bUseCase, bool& bSearchFromEnd, int& StartPosition); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.EqualEqual_StrStr (Underlying native function: EqualEqual_StrStr 0x24f97b0)
	static bool EqualEqualStrStr(struct FString& A, struct FString& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.EqualEqual_StriStri (Underlying native function: EqualEqual_StriStri 0xecd260)
	static bool EqualEqualStriStri(struct FString& A, struct FString& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.EndsWith (Underlying native function: EndsWith 0x9ded608)
	static bool EndsWith(struct FString& SourceString, struct FString& InSuffix, struct TEnumAsByte<ESearchCase>& SearchCase); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.CullArray (Underlying native function: CullArray 0x9de9870)
	static int CullArray(struct FString& SourceString, struct TArray<struct FString>& inArray); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_VectorToString (Underlying native function: Conv_VectorToString 0x9de8888)
	static struct FString ConvVectorToString(struct FVector& InVec); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_Vector3fToString (Underlying native function: Conv_Vector3fToString 0x9de84d0)
	static struct FString ConvVector3fToString(struct FVector3f& InVec); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_Vector2dToString (Underlying native function: Conv_Vector2dToString 0x9de8428)
	static struct FString ConvVector2dToString(struct FVector2D& InVec); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_TransformToString (Underlying native function: Conv_TransformToString 0x9de8164)
	static struct FString ConvTransformToString(struct FTransform& InTrans); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_StringToVector3f (Underlying native function: Conv_StringToVector3f 0x9de7ac0)
	static void ConvStringToVector3f(struct FString& InString, struct FVector3f& OutConvertedVector, bool& OutIsValid); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_StringToVector2D (Underlying native function: Conv_StringToVector2D 0x9de7884)
	static void ConvStringToVector2D(struct FString& InString, struct FVector2D& OutConvertedVector2D, bool& OutIsValid); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_StringToVector (Underlying native function: Conv_StringToVector 0x9de7cac)
	static void ConvStringToVector(struct FString& InString, struct FVector& OutConvertedVector, bool& OutIsValid); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_StringToRotator (Underlying native function: Conv_StringToRotator 0x9de7698)
	static void ConvStringToRotator(struct FString& InString, struct FRotator& OutConvertedRotator, bool& OutIsValid); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_StringToName (Underlying native function: Conv_StringToName 0xecd3ac)
	static struct FName ConvStringToName(struct FString& InString); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_StringToInt64 (Underlying native function: Conv_StringToInt64 0x9de7534)
	static int64_t ConvStringToInt64(struct FString& InString); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_StringToInt (Underlying native function: Conv_StringToInt 0xecd60c)
	static int ConvStringToInt(struct FString& InString); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_StringToDouble (Underlying native function: Conv_StringToDouble 0x9de73d0)
	static double ConvStringToDouble(struct FString& InString); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_StringToColor (Underlying native function: Conv_StringToColor 0x9de71e4)
	static void ConvStringToColor(struct FString& InString, struct FLinearColor& OutConvertedColor, bool& OutIsValid); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_RotatorToString (Underlying native function: Conv_RotatorToString 0x9de640c)
	static struct FString ConvRotatorToString(struct FRotator& InRot); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_PlatformUserIdToString (Underlying native function: Conv_PlatformUserIdToString 0x9de6138)
	static struct FString ConvPlatformUserIdToString(struct FPlatformUserId& InPlatformUserId); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_ObjectToString (Underlying native function: Conv_ObjectToString 0x9de607c)
	static struct FString ConvObjectToString(class UObject*& InObj); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_NameToString (Underlying native function: Conv_NameToString 0x224c2b4)
	static struct FString ConvNameToString(struct FName& InName); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_MatrixToString (Underlying native function: Conv_MatrixToString 0x9de5d10)
	static struct FString ConvMatrixToString(struct FMatrix& InMatrix); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_IntVectorToString (Underlying native function: Conv_IntVectorToString 0x9de580c)
	static struct FString ConvIntVectorToString(struct FIntVector& InIntVec); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_IntToString (Underlying native function: Conv_IntToString 0x26482e8)
	static struct FString ConvIntToString(int& inInt); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_IntPointToString (Underlying native function: Conv_IntPointToString 0x9de55d4)
	static struct FString ConvIntPointToString(struct FIntPoint*& InIntPoint); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_Int64ToString (Underlying native function: Conv_Int64ToString 0x9de5450)
	static struct FString ConvInt64ToString(int64_t& inInt); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_InputDeviceIdToString (Underlying native function: Conv_InputDeviceIdToString 0x9de52bc)
	static struct FString ConvInputDeviceIdToString(struct FInputDeviceId& InDeviceId); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_DoubleToString (Underlying native function: Conv_DoubleToString 0x9de4e7c)
	static struct FString ConvDoubleToString(double& InDouble); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_ColorToString (Underlying native function: Conv_ColorToString 0x25ce7e8)
	static struct FString ConvColorToString(struct FLinearColor& InColor); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_ByteToString (Underlying native function: Conv_ByteToString 0x9de4ae4)
	static struct FString ConvByteToString(unsigned char& inByte); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Conv_BoolToString (Underlying native function: Conv_BoolToString 0x23f5104)
	static struct FString ConvBoolToString(bool& InBool); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Contains (Underlying native function: Contains 0xecb6ec)
	static bool Contains(struct FString& SearchIn, struct FString& Substring, bool& bUseCase, bool& bSearchFromEnd); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.Concat_StrStr (Underlying native function: Concat_StrStr 0xecc204)
	static struct FString ConcatStrStr(struct FString& A, struct FString& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.BuildString_Vector2d (Underlying native function: BuildString_Vector2d 0x9de0aac)
	static struct FString BuildStringVector2d(struct FString& AppendTo, struct FString& Prefix, struct FVector2D& InVector2D, struct FString& Suffix); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.BuildString_Vector (Underlying native function: BuildString_Vector 0x9de0e84)
	static struct FString BuildStringVector(struct FString& AppendTo, struct FString& Prefix, struct FVector& InVector, struct FString& Suffix); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.BuildString_Rotator (Underlying native function: BuildString_Rotator 0x9de06c8)
	static struct FString BuildStringRotator(struct FString& AppendTo, struct FString& Prefix, struct FRotator& InRot, struct FString& Suffix); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.BuildString_Object (Underlying native function: BuildString_Object 0x9de02fc)
	static struct FString BuildStringObject(struct FString& AppendTo, struct FString& Prefix, class UObject*& InObj, struct FString& Suffix); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.BuildString_Name (Underlying native function: BuildString_Name 0x9ddff30)
	static struct FString BuildStringName(struct FString& AppendTo, struct FString& Prefix, struct FName& InName, struct FString& Suffix); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.BuildString_IntVector (Underlying native function: BuildString_IntVector 0x9ddfb50)
	static struct FString BuildStringIntVector(struct FString& AppendTo, struct FString& Prefix, struct FIntVector& InIntVector, struct FString& Suffix); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.BuildString_Int (Underlying native function: BuildString_Int 0x9ddf784)
	static struct FString BuildStringInt(struct FString& AppendTo, struct FString& Prefix, int& inInt, struct FString& Suffix); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.BuildString_Double (Underlying native function: BuildString_Double 0x9ddf3b0)
	static struct FString BuildStringDouble(struct FString& AppendTo, struct FString& Prefix, double& InDouble, struct FString& Suffix); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.BuildString_Color (Underlying native function: BuildString_Color 0x9ddefd8)
	static struct FString BuildStringColor(struct FString& AppendTo, struct FString& Prefix, struct FLinearColor& InColor, struct FString& Suffix); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringLibrary.BuildString_Bool (Underlying native function: BuildString_Bool 0x9ddec00)
	static struct FString BuildStringBool(struct FString& AppendTo, struct FString& Prefix, bool& InBool, struct FString& Suffix); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};


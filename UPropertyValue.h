// Class /Script/VariantManagerContent.PropertyValue
// Size: 0x1b8
class UPropertyValue : public UObject
{
	unsigned char unreflected_28[0x60]; // 0x28 (0x60) 
	struct TArray<> Properties; // 0x88 (0x10)
	struct TArray<int> PropertyIndices; // 0x98 (0x10)
	struct TArray<struct FCapturedPropSegment> CapturedPropSegments; // 0xa8 (0x10)
	struct FString FullDisplayString; // 0xb8 (0x10)
	struct FName PropertySetterName; // 0xc8 (0x4)
	unsigned char unreflected_cc[0x4]; // 0xcc (0x4) 
	struct TMap<struct FString, struct FString> PropertySetterParameterDefaults; // 0xd0 (0x50)
	bool bHasRecordedData; // 0x120 (0x1)
	unsigned char unreflected_121[0x7]; // 0x121 (0x7) 
	unsigned char LeafPropertyClass_128[0x8]; // 0x128 (0x8) (UNHANDLED PROPERTY TYPE: ClassPtrProperty UID: 0)
	unsigned char unreflected_130[0x8]; // 0x130 (0x8) 
	struct TArray<unsigned char> ValueBytes; // 0x138 (0x10)
	enum EPropertyValueCategory PropCategory; // 0x148 (0x1)
	unsigned char padding_149[0x6f]; // 0x149 (0x6f)

	/* Functions */

	// Function /Script/VariantManagerContent.PropertyValue.HasRecordedData (Underlying native function: HasRecordedData 0x76e7400)
	bool HasRecordedData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VariantManagerContent.PropertyValue.GetPropertyTooltip (Underlying native function: GetPropertyTooltip 0x8011398)
	struct FText GetPropertyTooltip(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VariantManagerContent.PropertyValue.GetFullDisplayString (Underlying native function: GetFullDisplayString 0x8011178)
	struct FString GetFullDisplayString(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};


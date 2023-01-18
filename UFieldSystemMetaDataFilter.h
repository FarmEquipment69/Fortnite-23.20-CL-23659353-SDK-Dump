// Class /Script/FieldSystemEngine.FieldSystemMetaDataFilter
// Size: 0xa8
class UFieldSystemMetaDataFilter : public UFieldSystemMetaData
{
	struct TEnumAsByte<EFieldFilterType> FilterType; // 0xa0 (0x1)
	struct TEnumAsByte<EFieldObjectType> ObjectType; // 0xa1 (0x1)
	struct TEnumAsByte<EFieldPositionType> PositionType; // 0xa2 (0x1)
	unsigned char padding_a3[0x5]; // 0xa3 (0x5)

	/* Functions */

	// Function /Script/FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType (Underlying native function: SetMetaDataFilterType 0x99a423c)
	class UFieldSystemMetaDataFilter* SetMetaDataFilterType(struct TEnumAsByte<EFieldFilterType>& FilterType, struct TEnumAsByte<EFieldObjectType>& ObjectType, struct TEnumAsByte<EFieldPositionType>& PositionType); // (Final | Native | Public | BlueprintCallable | BlueprintPure)
};


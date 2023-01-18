// ScriptStruct /Script/Serialization.StructSerializerTestStruct
// Size: 0x800
struct FStructSerializerTestStruct
{
	struct FStructSerializerNumericTestStruct Numerics; // 0x0 (0x30)
	struct FStructSerializerBooleanTestStruct Booleans; // 0x30 (0x3)
	unsigned char unreflected_33[0x5]; // 0x33 (0x5) 
	struct FStructSerializerObjectTestStruct Objects; // 0x38 (0xb0)
	unsigned char unreflected_e8[0x8]; // 0xe8 (0x8) 
	struct FStructSerializerBuiltinTestStruct Builtins; // 0xf0 (0xd0)
	struct FStructSerializerArrayTestStruct Arrays; // 0x1c0 (0x60)
	struct FStructSerializerMapTestStruct Maps; // 0x220 (0x140)
	struct FStructSerializerSetTestStruct Sets; // 0x360 (0x140)
	struct FStructSerializerLWCTypesTest LWCTypes; // 0x4a0 (0x360)
};


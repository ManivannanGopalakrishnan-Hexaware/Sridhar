#pragma warning( disable : 4100 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4355 )
#pragma warning( disable : 4503 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4512 )
#pragma warning( disable:  4651 )
#pragma warning( disable : 4691 )
#pragma warning( disable : 4723 )
#pragma warning( disable : 4702 )
#define SCOPE_NO_UDT
#if defined(COMPILE_NATIVE)
#include "ScopeCommonError.h"
#include "ScopeError.h"
#include "ScopeOperators.h"
#endif
#if defined(COMPILE_MANAGED)
#using <mscorlib.dll>
[assembly: System::Runtime::Versioning::TargetFrameworkAttribute(".NETFramework,Version=v4.5", FrameworkDisplayName = ".NET Framework, Version 4.5")];
#include "ScopeCommonError.h"
#include "SqlManaged.h"
#endif
#if defined(COMPILE_NATIVE)
#endif
using namespace ScopeEngine;
static ScopeEngine::CompilerSettings GetCompilerSettings()
{
    static ScopeEngine::CompilerSettings settings;
    settings.m_restrictOperatorMemorySpilling = false;
    settings.m_verboseRuntimeStatistic = false;
    return settings;
};

enum OperatorUID
{
UID_Extract_0 = 1,
UID_SV1_Extract_out0 = 2,
UID_Extract_1 = 3,
UID_Extract_1_Data0 = 4,
UID_Process_2 = 5,
UID_SV2_Extract_out0 = 6,
UID_HashJoin_3 = 7,
UID_HashJoin_3_Data0 = 8,
UID_Split_4 = 9,
UID_SV3_Combine_Split_out0 = 10,
UID_SV3_Combine_Split_out1 = 11,
UID_Output_5 = 12,
UID_Process_6 = 13,
UID_Process_6_Data0 = 14,
UID_SV4_Process_out0 = 15,
UID_Process_8 = 16,
UID_Process_8_Data0 = 17,
UID_Process_9 = 18,
UID_Process_9_Data0 = 19,
UID_Process_10 = 20,
UID_Process_10_Data0 = 21,
UID_SV5_Process_out0 = 22,
UID_Split_4_0,
UID_Split_4_1,
UID_HashJoin_3_0,
UID_HashJoin_3_1,
UID_HashJoin_3_FB_0,
UID_HashJoin_3_FB_1,
UID_Process_9_0,
UID_Process_9_1,
UID_Process_8_Prefix,
UID_ParallelUnionAll_Extract_0,
UID_ParallelUnionAll_Process_2
};
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

//namespace ScopeGeneratedClasses
//{
    // IDs representing UDTs to be used in native code
    enum UserDefinedTypeId
    {
        
    };

#if defined(COMPILE_MANAGED)
// Explicit instantiations for templated functions that are defined in managed code
#endif // defined(COMPILE_MANAGED)


    class SV1_Extract_out0
    {
    public:
        FString m_name;
        int m_id;
        SV1_Extract_out0();
        SV1_Extract_out0(const SV1_Extract_out0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV1_Extract_out0(const SV1_Extract_out0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"name:string,id:int" };
        }

        friend ostream & operator<<(ostream & os, SV1_Extract_out0 & row);

    };


    INLINE ostream & operator<<(ostream & os, SV1_Extract_out0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class Extract_1_Data0
    {
    public:
        int m_id;
        int m_maths;
        int m_science;
        int m_social;
        int m_tamil;
        int m_english;
        Extract_1_Data0();
        Extract_1_Data0(const Extract_1_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Extract_1_Data0(const Extract_1_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"id:int,maths:int,science:int,social:int,tamil:int,english:int" };
        }

        friend ostream & operator<<(ostream & os, Extract_1_Data0 & row);

    };


    INLINE ostream & operator<<(ostream & os, Extract_1_Data0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class SV2_Extract_out0
    {
    public:
        int m_maths;
        int m_science;
        int m_social;
        int m_tamil;
        int m_english;
        int m_id1;
        SV2_Extract_out0();
        SV2_Extract_out0(const SV2_Extract_out0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV2_Extract_out0(const SV2_Extract_out0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"maths:int,science:int,social:int,tamil:int,english:int,id1:int" };
        }

        friend ostream & operator<<(ostream & os, SV2_Extract_out0 & row);

    };


    INLINE ostream & operator<<(ostream & os, SV2_Extract_out0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class HashJoin_3_Data0
    {
    public:
        FString m_name;
        int m_id;
        int m_maths;
        int m_science;
        int m_social;
        int m_tamil;
        int m_english;
        HashJoin_3_Data0();
        HashJoin_3_Data0(const HashJoin_3_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashJoin_3_Data0(const HashJoin_3_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"name:string,id:int,maths:int,science:int,social:int,tamil:int,english:int" };
        }

        friend ostream & operator<<(ostream & os, HashJoin_3_Data0 & row);

    };


    INLINE ostream & operator<<(ostream & os, HashJoin_3_Data0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class HashCombineKey_HashJoin_3
    {
    public:
        int m_id1_id;
        HashCombineKey_HashJoin_3();
        HashCombineKey_HashJoin_3(const HashCombineKey_HashJoin_3 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineKey_HashJoin_3(const HashCombineKey_HashJoin_3 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"id1_id:int" };
        }

        friend ostream & operator<<(ostream & os, HashCombineKey_HashJoin_3 & row);

    };


    INLINE ostream & operator<<(ostream & os, HashCombineKey_HashJoin_3 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class HashCombineValue_HashJoin_3
    {
    public:
        FString m_name;
        HashCombineValue_HashJoin_3();
        HashCombineValue_HashJoin_3(const HashCombineValue_HashJoin_3 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineValue_HashJoin_3(const HashCombineValue_HashJoin_3 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"name:string" };
        }

        friend ostream & operator<<(ostream & os, HashCombineValue_HashJoin_3 & row);

    };


    INLINE ostream & operator<<(ostream & os, HashCombineValue_HashJoin_3 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class SV3_Combine_Split_out0
    {
    public:
        int m_id;
        FString m_name;
        int m_maths;
        int m_science;
        int m_social;
        int m_tamil;
        int m_english;
        SV3_Combine_Split_out0();
        SV3_Combine_Split_out0(const SV3_Combine_Split_out0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV3_Combine_Split_out0(const SV3_Combine_Split_out0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"id:int,name:string,maths:int,science:int,social:int,tamil:int,english:int" };
        }

        friend ostream & operator<<(ostream & os, SV3_Combine_Split_out0 & row);

    };


    INLINE ostream & operator<<(ostream & os, SV3_Combine_Split_out0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class SV3_Combine_Split_out1
    {
    public:
        int m_total;
        int m_id;
        FString m_name;
        int m_maths;
        int m_science;
        int m_social;
        int m_tamil;
        int m_english;
        SV3_Combine_Split_out1();
        SV3_Combine_Split_out1(const SV3_Combine_Split_out1 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV3_Combine_Split_out1(const SV3_Combine_Split_out1 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"total:int,id:int,name:string,maths:int,science:int,social:int,tamil:int,english:int" };
        }

        friend ostream & operator<<(ostream & os, SV3_Combine_Split_out1 & row);

    };


    INLINE ostream & operator<<(ostream & os, SV3_Combine_Split_out1 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class Process_6_Data0
    {
    public:
        int m_id;
        FString m_name;
        int m_maths;
        int m_science;
        int m_social;
        int m_tamil;
        int m_english;
        int m_total;
        Process_6_Data0();
        Process_6_Data0(const Process_6_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_6_Data0(const Process_6_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"id:int,name:string,maths:int,science:int,social:int,tamil:int,english:int,total:int" };
        }

        friend ostream & operator<<(ostream & os, Process_6_Data0 & row);

    };


    INLINE ostream & operator<<(ostream & os, Process_6_Data0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class Process_9_Data0
    {
    public:
        NativeNullable<__int64> m_rank;
        int m_id;
        FString m_name;
        int m_maths;
        int m_science;
        int m_social;
        int m_tamil;
        int m_english;
        int m_total;
        Process_9_Data0();
        Process_9_Data0(const Process_9_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_9_Data0(const Process_9_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"rank:long?,id:int,name:string,maths:int,science:int,social:int,tamil:int,english:int,total:int" };
        }

        friend ostream & operator<<(ostream & os, Process_9_Data0 & row);

    };


    INLINE ostream & operator<<(ostream & os, Process_9_Data0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class SequenceProjectSchemaGroup_Process_9
    {
    public:
        SequenceProjectSchemaGroup_Process_9();
        SequenceProjectSchemaGroup_Process_9(const SequenceProjectSchemaGroup_Process_9 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SequenceProjectSchemaGroup_Process_9(const SequenceProjectSchemaGroup_Process_9 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{};
        }

        friend ostream & operator<<(ostream & os, SequenceProjectSchemaGroup_Process_9 & row);

    };


    INLINE ostream & operator<<(ostream & os, SequenceProjectSchemaGroup_Process_9 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class SequenceProjectSchemaValue_Process_9
    {
    public:
        int m_total;
        SequenceProjectSchemaValue_Process_9();
        SequenceProjectSchemaValue_Process_9(const SequenceProjectSchemaValue_Process_9 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SequenceProjectSchemaValue_Process_9(const SequenceProjectSchemaValue_Process_9 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"total:int" };
        }

        friend ostream & operator<<(ostream & os, SequenceProjectSchemaValue_Process_9 & row);

    };


    INLINE ostream & operator<<(ostream & os, SequenceProjectSchemaValue_Process_9 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class Process_10_Data0
    {
    public:
        int m_id;
        FString m_name;
        int m_maths;
        int m_science;
        int m_social;
        int m_tamil;
        int m_english;
        int m_total;
        NativeNullable<__int64> m_rank;
        Process_10_Data0();
        Process_10_Data0(const Process_10_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_10_Data0(const Process_10_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"id:int,name:string,maths:int,science:int,social:int,tamil:int,english:int,total:int,rank:long?" };
        }

        friend ostream & operator<<(ostream & os, Process_10_Data0 & row);

    };


    INLINE ostream & operator<<(ostream & os, Process_10_Data0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



#if defined(COMPILE_MANAGED)

#endif // defined(COMPILE_MANAGED)


//}

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<SV1_Extract_out0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV1_Extract_out0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_name);
                    input->Read(row.m_id);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_name);
                    }
                    else
                    {
                        row.m_name.SetNull();
                    }
                    input->Read(row.m_id);
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV1_Extract_out0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, SV1_Extract_out0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_name.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            if (!row.m_name.IsNull())
            {
                output->Write(row.m_name);
            }
            output->Write(row.m_id);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const SV1_Extract_out0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV1_Extract_out0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<SV2_Extract_out0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV2_Extract_out0 & row)
        {
            try
            {
                input->Read(row.m_maths);
                input->Read(row.m_science);
                input->Read(row.m_social);
                input->Read(row.m_tamil);
                input->Read(row.m_english);
                input->Read(row.m_id1);
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV2_Extract_out0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, SV2_Extract_out0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            output->Write(row.m_maths);
            output->Write(row.m_science);
            output->Write(row.m_social);
            output->Write(row.m_tamil);
            output->Write(row.m_english);
            output->Write(row.m_id1);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const SV2_Extract_out0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV2_Extract_out0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<SV3_Combine_Split_out1>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV3_Combine_Split_out1 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_total);
                    input->Read(row.m_id);
                    input->Read(row.m_name);
                    input->Read(row.m_maths);
                    input->Read(row.m_science);
                    input->Read(row.m_social);
                    input->Read(row.m_tamil);
                    input->Read(row.m_english);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    input->Read(row.m_total);
                    input->Read(row.m_id);
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_name);
                    }
                    else
                    {
                        row.m_name.SetNull();
                    }
                    input->Read(row.m_maths);
                    input->Read(row.m_science);
                    input->Read(row.m_social);
                    input->Read(row.m_tamil);
                    input->Read(row.m_english);
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV3_Combine_Split_out1>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, SV3_Combine_Split_out1 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_name.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            output->Write(row.m_total);
            output->Write(row.m_id);
            if (!row.m_name.IsNull())
            {
                output->Write(row.m_name);
            }
            output->Write(row.m_maths);
            output->Write(row.m_science);
            output->Write(row.m_social);
            output->Write(row.m_tamil);
            output->Write(row.m_english);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const SV3_Combine_Split_out1 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV3_Combine_Split_out1 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

#pragma region Schema Constructors
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV1_Extract_out0::SV1_Extract_out0()
    {
        m_id = 0;
    }
    INLINE SV1_Extract_out0::SV1_Extract_out0(const SV1_Extract_out0 & c, IncrementalAllocator * alloc) :
            m_name(c.m_name, alloc)
    {
        m_id = c.m_id;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Extract_1_Data0::Extract_1_Data0()
    {
        m_id = 0;
        m_maths = 0;
        m_science = 0;
        m_social = 0;
        m_tamil = 0;
        m_english = 0;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV2_Extract_out0::SV2_Extract_out0()
    {
        m_maths = 0;
        m_science = 0;
        m_social = 0;
        m_tamil = 0;
        m_english = 0;
        m_id1 = 0;
    }
    INLINE SV2_Extract_out0::SV2_Extract_out0(const SV2_Extract_out0 & c, IncrementalAllocator * alloc)
    {
        m_maths = c.m_maths;
        m_science = c.m_science;
        m_social = c.m_social;
        m_tamil = c.m_tamil;
        m_english = c.m_english;
        m_id1 = c.m_id1;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashJoin_3_Data0::HashJoin_3_Data0()
    {
        m_id = 0;
        m_maths = 0;
        m_science = 0;
        m_social = 0;
        m_tamil = 0;
        m_english = 0;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineKey_HashJoin_3::HashCombineKey_HashJoin_3()
    {
        m_id1_id = 0;
    }
    INLINE HashCombineKey_HashJoin_3::HashCombineKey_HashJoin_3(const HashCombineKey_HashJoin_3 & c, IncrementalAllocator * alloc)
    {
        m_id1_id = c.m_id1_id;
    }

    template <typename Allocator>
    INLINE HashCombineKey_HashJoin_3::HashCombineKey_HashJoin_3(const HashCombineKey_HashJoin_3 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_id1_id = c.m_id1_id;
    }

    template <typename Allocator>
    INLINE void HashCombineKey_HashJoin_3::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineValue_HashJoin_3::HashCombineValue_HashJoin_3()
    {
    }
    INLINE HashCombineValue_HashJoin_3::HashCombineValue_HashJoin_3(const HashCombineValue_HashJoin_3 & c, IncrementalAllocator * alloc) :
            m_name(c.m_name, alloc)
    {
    }

    template <typename Allocator>
    INLINE HashCombineValue_HashJoin_3::HashCombineValue_HashJoin_3(const HashCombineValue_HashJoin_3 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_name = c.m_name;
        memoryManager->Copy(m_name);
    }

    template <typename Allocator>
    INLINE void HashCombineValue_HashJoin_3::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
        memoryManager->Delete(m_name);
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV3_Combine_Split_out0::SV3_Combine_Split_out0()
    {
        m_id = 0;
        m_maths = 0;
        m_science = 0;
        m_social = 0;
        m_tamil = 0;
        m_english = 0;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV3_Combine_Split_out1::SV3_Combine_Split_out1()
    {
        m_total = 0;
        m_id = 0;
        m_maths = 0;
        m_science = 0;
        m_social = 0;
        m_tamil = 0;
        m_english = 0;
    }
    INLINE SV3_Combine_Split_out1::SV3_Combine_Split_out1(const SV3_Combine_Split_out1 & c, IncrementalAllocator * alloc) :
            m_name(c.m_name, alloc)
    {
        m_total = c.m_total;
        m_id = c.m_id;
        m_maths = c.m_maths;
        m_science = c.m_science;
        m_social = c.m_social;
        m_tamil = c.m_tamil;
        m_english = c.m_english;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_6_Data0::Process_6_Data0()
    {
        m_id = 0;
        m_maths = 0;
        m_science = 0;
        m_social = 0;
        m_tamil = 0;
        m_english = 0;
        m_total = 0;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_9_Data0::Process_9_Data0()
    {
        m_id = 0;
        m_maths = 0;
        m_science = 0;
        m_social = 0;
        m_tamil = 0;
        m_english = 0;
        m_total = 0;
    }
    INLINE Process_9_Data0::Process_9_Data0(const Process_9_Data0 & c, IncrementalAllocator * alloc) :
            m_rank(c.m_rank),
            m_name(c.m_name, alloc)
    {
        m_id = c.m_id;
        m_maths = c.m_maths;
        m_science = c.m_science;
        m_social = c.m_social;
        m_tamil = c.m_tamil;
        m_english = c.m_english;
        m_total = c.m_total;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SequenceProjectSchemaGroup_Process_9::SequenceProjectSchemaGroup_Process_9()
    {
    }
    INLINE SequenceProjectSchemaGroup_Process_9::SequenceProjectSchemaGroup_Process_9(const SequenceProjectSchemaGroup_Process_9 & c, IncrementalAllocator * alloc)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SequenceProjectSchemaValue_Process_9::SequenceProjectSchemaValue_Process_9()
    {
        m_total = 0;
    }
    INLINE SequenceProjectSchemaValue_Process_9::SequenceProjectSchemaValue_Process_9(const SequenceProjectSchemaValue_Process_9 & c, IncrementalAllocator * alloc)
    {
        m_total = c.m_total;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_10_Data0::Process_10_Data0()
    {
        m_id = 0;
        m_maths = 0;
        m_science = 0;
        m_social = 0;
        m_tamil = 0;
        m_english = 0;
        m_total = 0;
    }

#pragma endregion Schema Constructors
#pragma hdrstop
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_INIT_SHUTDOWN)
#if defined(COMPILE_MANAGED)
extern "C" __declspec(dllexport) void __stdcall InitVertexManaged(std::string * argv, int argc)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif
    cli::array<String^>^ arguments = ScopeEngineManaged::GroupArguments(argv, argc);
    ScopeEngineManaged::InitializeScopeEngineManaged(arguments);
}

extern "C" __declspec(dllexport) void __stdcall ShutdownVertexManaged(CLRMemoryStat& stat)
{
    ScopeEngineManaged::FinalizeScopeEngineManaged(stat);
}
#endif //#if defined(COMPILE_MANAGED)

#if defined(COMPILE_NATIVE)
ScopeEngine::ScopeCEPCheckpointManager* g_scopeCEPCheckpointManager = NULL;

extern "C" __declspec(dllexport) void __stdcall InitVertexNative(VertexExecutionInfo * vertexExecutionInfo)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif

    ErrorManager::GetGlobal()->EnableJSON();
}

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// Add broadcast vertex code
extern "C" __declspec(dllexport) void __stdcall SV_CopyThrough_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
{
    SCOPE_ASSERT(inputCnt == 1 && outputCnt == 1);
    IOManager::CopyStream(IOManager::GetGlobal()->GetDevice(inputs[0].inputFileName), IOManager::GetGlobal()->GetDevice(outputs[0].outputFileName));
}

#endif //#if defined(COMPILE_NATIVE)


#endif //#if defined(COMPILE_INIT_SHUTDOWN)
#pragma region SV1_Extract
#if defined(COMPILE_SV1_EXTRACT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class TextExtractPolicy<SV1_Extract_out0, UID_Extract_0>
    {
    public:
        static bool Deserialize(TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, false, false, 0, CharFormat_uint16, false, false>, CosmosInput> * input, SV1_Extract_out0 & row)
        {
            for(;;)
            {
                try
                {
                    // When we start a new row we always skip all empty lines first.
                    if (!input->StartRow())
                    {
                        return false;
                    }

                    input->Read(row.m_name);
                    input->Read(row.m_id);
                    input->SkipColumn();

                    if (!input->EndRow())
                    {
                        // Too many columns in row - report error.
                        throw ScopeStreamExceptionWithEvidence(
                            E_EXTRACT_ROW_DELIMITER_EXPECTED,
                            { input->CurrentLineNumber(), input->CurrentField() },
                            EvidenceFormatter::FormatText(
                                input->GetBufferStart(),
                                input->GetReadPosition(),
                                input->GetBufferEnd(),
                                input->rowDelimiter,
                                input->delimiter));
                    }
                    return true;
                }
                catch (const ExtractInvalidCharacterException& e)
                {
                    std::throw_with_nested(ExtractException(
                        E_EXTRACT_ENCODING_ERROR,
                        { input->GetEncodedGlobalFileOffset() + e.GetErrorOffset(), input->CurrentLineNumber() },
                        false));
                }
                catch (const TextConversionException& e)
                {
                    std::throw_with_nested(ExtractException(
                        E_EXTRACT_ROW_ERROR,
                        { e.GetRowNumber(), e.GetColumnIndex(), GetColumnName(e.GetColumnIndex()) },
                        false));
                }
                catch (const RuntimeMemoryException& /* e */)
                {
                    std::throw_with_nested(ScopeStreamExceptionWithEvidence(
                        E_EXTRACT_ROW_TOO_LONG,
                        { input->CurrentLineNumber(), Configuration::GetGlobal().GetMaxInMemoryRowSize() },
                        EvidenceFormatter::FormatText(
                            input->GetBufferStart(),
                            input->GetReadPosition(),
                            input->GetBufferEnd(),
                            input->rowDelimiter,
                            input->delimiter)));
                }
                catch (const ScopeStreamException& e)
                {
                    switch(e.Error())
                    {
                    // Following error will terminate read
                    case ScopeStreamException::EndOfFile:
                    case ScopeStreamException::BadDevice:
                        return false;

                    // Bad rows throw exception
                    case ScopeStreamException::UnexpectedNewLine:
                        // Wrong number of columns in row - report error
                        // At this point, line number is increased to point at the next line. Subtract 1 to get line
                        // number of the offending row.
                        throw ScopeStreamExceptionWithEvidence(
                            E_EXTRACT_UNEXPECTED_ROW_DELIMITER,
                            { input->CurrentLineNumber() - 1, 3, input->CurrentField() },
                            EvidenceFormatter::FormatText(
                                input->GetBufferStart(),
                                input->GetReadPosition(),
                                input->GetBufferEnd(),
                                input->rowDelimiter,
                                input->delimiter));

                    // All exceptions should be handled above.
                    default:
                        SCOPE_ASSERT(false);
                    }
                }
            }
        }
        static const char* GetColumnName(std::size_t columnIndex)
        {
            static const std::array<const char*, 4> c_columnNames =
            {
                "name",
                "id",
                "Class",
                "*** END ***"
            };

            auto idx = std::min(columnIndex, c_columnNames.size() - 1);
            return c_columnNames[idx];
        }
    };

#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV1_Extract_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // If we have more than one input, we will random shuffle it
        if (inputCnt - 0 > 1)
        {
            ScopeRandom scopeRandom((int)vertexExecutionInfo->m_vertexId);
            auto lambda = [&scopeRandom](int max)->int { return (scopeRandom.Next() % max + max) % max;}; // scopeRandom.Next() % max could be negative value
            random_shuffle(&inputs[0], inputs + inputCnt - 0, lambda ); 
        }
        // Define extractor type and construct objects
        // 
        typedef Extractor<SV1_Extract_out0, TextExtractPolicy<SV1_Extract_out0, UID_Extract_0>, TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, false, false, 0, CharFormat_uint16, false, false>, CosmosInput>> ExtractorType1_SV1_Extract;
        unique_ptr<unique_ptr<ExtractorType1_SV1_Extract>[]> extractor_0_array(new unique_ptr<ExtractorType1_SV1_Extract>[inputCnt - 0]);
        
        for (int i = 0; i < inputCnt; i++)
        {
            // 
            extractor_0_array[i - 0].reset(new ExtractorType1_SV1_Extract(inputs[i], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, InputStreamParameters(',', '\0', '\0', static_cast<const char*>(__nullptr), false, true, UTF8, true, false, 0, CharFormat_uint16), UID_Extract_0));
        }

    ExtractorType1_SV1_Extract ** extractor_0 = (ExtractorType1_SV1_Extract **)extractor_0_array.get();

        
        ULONG extractor_0_count = (ULONG) inputCnt - 0;
        // Merge streams N->1
        typedef ParallelUnionAll<ExtractorType1_SV1_Extract, SV1_Extract_out0, IsNativeOnlyVertex> UnionAllType_Extract_0_SV1_Extract_out0_connector;
        unique_ptr<UnionAllType_Extract_0_SV1_Extract_out0_connector> unionall_Extract_0_SV1_Extract_out0_connector_ptr(new UnionAllType_Extract_0_SV1_Extract_out0_connector(extractor_0,extractor_0_count,false,UID_ParallelUnionAll_Extract_0));
        UnionAllType_Extract_0_SV1_Extract_out0_connector * unionall_Extract_0_SV1_Extract_out0_connector = unionall_Extract_0_SV1_Extract_out0_connector_ptr.get();
        ULONG unionall_Extract_0_SV1_Extract_out0_connector_count = 1;
        // Define outputer type
        typedef Outputer<UnionAllType_Extract_0_SV1_Extract_out0_connector, SV1_Extract_out0, BinaryOutputPolicy<SV1_Extract_out0>, BinaryOutputStream, false> OutputerType2_SV1_Extract;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV1_Extract> outputer_SV1_Extract_out0_ptr(new OutputerType2_SV1_Extract(unionall_Extract_0_SV1_Extract_out0_connector, outputs[0].outputFileName, false, x_outputBufSize, x_outputBufCnt, UID_SV1_Extract_out0));
        OutputerType2_SV1_Extract * outputer_SV1_Extract_out0 = outputer_SV1_Extract_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV1_Extract_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            SV1_Extract_out0 row;
            outputer_SV1_Extract_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV1_Extract_out0->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV1_Extract_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV1_Extract
#pragma region SV2_Extract
#if defined(COMPILE_SV2_EXTRACT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class TextExtractPolicy<Extract_1_Data0, UID_Extract_1>
    {
    public:
        static bool Deserialize(TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, false, false, 0, CharFormat_uint16, false, false>, CosmosInput> * input, Extract_1_Data0 & row)
        {
            for(;;)
            {
                try
                {
                    // When we start a new row we always skip all empty lines first.
                    if (!input->StartRow())
                    {
                        return false;
                    }

                    input->Read(row.m_id);
                    input->Read(row.m_maths);
                    input->Read(row.m_science);
                    input->Read(row.m_social);
                    input->Read(row.m_tamil);
                    input->Read(row.m_english);

                    if (!input->EndRow())
                    {
                        // Too many columns in row - report error.
                        throw ScopeStreamExceptionWithEvidence(
                            E_EXTRACT_ROW_DELIMITER_EXPECTED,
                            { input->CurrentLineNumber(), input->CurrentField() },
                            EvidenceFormatter::FormatText(
                                input->GetBufferStart(),
                                input->GetReadPosition(),
                                input->GetBufferEnd(),
                                input->rowDelimiter,
                                input->delimiter));
                    }
                    return true;
                }
                catch (const ExtractInvalidCharacterException& e)
                {
                    std::throw_with_nested(ExtractException(
                        E_EXTRACT_ENCODING_ERROR,
                        { input->GetEncodedGlobalFileOffset() + e.GetErrorOffset(), input->CurrentLineNumber() },
                        false));
                }
                catch (const TextConversionException& e)
                {
                    std::throw_with_nested(ExtractException(
                        E_EXTRACT_ROW_ERROR,
                        { e.GetRowNumber(), e.GetColumnIndex(), GetColumnName(e.GetColumnIndex()) },
                        false));
                }
                catch (const RuntimeMemoryException& /* e */)
                {
                    std::throw_with_nested(ScopeStreamExceptionWithEvidence(
                        E_EXTRACT_ROW_TOO_LONG,
                        { input->CurrentLineNumber(), Configuration::GetGlobal().GetMaxInMemoryRowSize() },
                        EvidenceFormatter::FormatText(
                            input->GetBufferStart(),
                            input->GetReadPosition(),
                            input->GetBufferEnd(),
                            input->rowDelimiter,
                            input->delimiter)));
                }
                catch (const ScopeStreamException& e)
                {
                    switch(e.Error())
                    {
                    // Following error will terminate read
                    case ScopeStreamException::EndOfFile:
                    case ScopeStreamException::BadDevice:
                        return false;

                    // Bad rows throw exception
                    case ScopeStreamException::UnexpectedNewLine:
                        // Wrong number of columns in row - report error
                        // At this point, line number is increased to point at the next line. Subtract 1 to get line
                        // number of the offending row.
                        throw ScopeStreamExceptionWithEvidence(
                            E_EXTRACT_UNEXPECTED_ROW_DELIMITER,
                            { input->CurrentLineNumber() - 1, 6, input->CurrentField() },
                            EvidenceFormatter::FormatText(
                                input->GetBufferStart(),
                                input->GetReadPosition(),
                                input->GetBufferEnd(),
                                input->rowDelimiter,
                                input->delimiter));

                    // All exceptions should be handled above.
                    default:
                        SCOPE_ASSERT(false);
                    }
                }
            }
        }
        static const char* GetColumnName(std::size_t columnIndex)
        {
            static const std::array<const char*, 7> c_columnNames =
            {
                "id",
                "maths",
                "science",
                "social",
                "tamil",
                "english",
                "*** END ***"
            };

            auto idx = std::min(columnIndex, c_columnNames.size() - 1);
            return c_columnNames[idx];
        }
    };

#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_2 [] =
    {
        "maths",
        "science",
        "social",
        "tamil",
        "english",
        "id",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Extract_1_Data0, SV2_Extract_out0, UID_Process_2>
    {
    public:

        static bool FilterTransformRow(Extract_1_Data0 & input, SV2_Extract_out0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_maths = input.m_maths;
                    exceptionIndex++;
                    output.m_science = input.m_science;
                    exceptionIndex++;
                    output.m_social = input.m_social;
                    exceptionIndex++;
                    output.m_tamil = input.m_tamil;
                    exceptionIndex++;
                    output.m_english = input.m_english;
                    exceptionIndex++;
                    output.m_id1 = input.m_id;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Process_2[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements().AddMemoryInRows(1, 1);
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV2_Extract_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // If we have more than one input, we will random shuffle it
        if (inputCnt - 0 > 1)
        {
            ScopeRandom scopeRandom((int)vertexExecutionInfo->m_vertexId);
            auto lambda = [&scopeRandom](int max)->int { return (scopeRandom.Next() % max + max) % max;}; // scopeRandom.Next() % max could be negative value
            random_shuffle(&inputs[0], inputs + inputCnt - 0, lambda ); 
        }
        // Define extractor type and construct objects
        // 
        typedef Extractor<Extract_1_Data0, TextExtractPolicy<Extract_1_Data0, UID_Extract_1>, TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, false, false, 0, CharFormat_uint16, false, false>, CosmosInput>> ExtractorType1_SV2_Extract;
        unique_ptr<unique_ptr<ExtractorType1_SV2_Extract>[]> extractor_0_array(new unique_ptr<ExtractorType1_SV2_Extract>[inputCnt - 0]);
        
        for (int i = 0; i < inputCnt; i++)
        {
            // 
            extractor_0_array[i - 0].reset(new ExtractorType1_SV2_Extract(inputs[i], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, InputStreamParameters(',', '\0', '\0', static_cast<const char*>(__nullptr), false, true, UTF8, true, false, 0, CharFormat_uint16), UID_Extract_1));
        }

    ExtractorType1_SV2_Extract ** extractor_0 = (ExtractorType1_SV2_Extract **)extractor_0_array.get();

        
        ULONG extractor_0_count = (ULONG) inputCnt - 0;
        // Define the type of the operator
        typedef FilterTransformer<ExtractorType1_SV2_Extract, Extract_1_Data0, SV2_Extract_out0, UID_Process_2> FilterTransformerType_Process_2;
        // Allocate memory for the operator array
        unique_ptr<unique_ptr<FilterTransformerType_Process_2>[]> filterTransformer_Process_2_array(new unique_ptr<FilterTransformerType_Process_2>[extractor_0_count]);
        
        // Construct operator objects
        for(ULONG i = 0; i < extractor_0_count; i++)
        {
            filterTransformer_Process_2_array[i].reset(new FilterTransformerType_Process_2(extractor_0[i], UID_Process_2)); 
        }
        
        FilterTransformerType_Process_2 ** filterTransformer_Process_2 = (FilterTransformerType_Process_2 **)filterTransformer_Process_2_array.get();
        ULONG filterTransformer_Process_2_count = extractor_0_count;
        // Merge streams N->1
        typedef ParallelUnionAll<FilterTransformerType_Process_2, SV2_Extract_out0, IsNativeOnlyVertex> UnionAllType_Process_2_SV2_Extract_out0_connector;
        unique_ptr<UnionAllType_Process_2_SV2_Extract_out0_connector> unionall_Process_2_SV2_Extract_out0_connector_ptr(new UnionAllType_Process_2_SV2_Extract_out0_connector(filterTransformer_Process_2,filterTransformer_Process_2_count,false,UID_ParallelUnionAll_Process_2));
        UnionAllType_Process_2_SV2_Extract_out0_connector * unionall_Process_2_SV2_Extract_out0_connector = unionall_Process_2_SV2_Extract_out0_connector_ptr.get();
        ULONG unionall_Process_2_SV2_Extract_out0_connector_count = 1;
        // Define outputer type
        typedef Outputer<UnionAllType_Process_2_SV2_Extract_out0_connector, SV2_Extract_out0, BinaryOutputPolicy<SV2_Extract_out0>, BinaryOutputStream, false> OutputerType2_SV2_Extract;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV2_Extract> outputer_SV2_Extract_out0_ptr(new OutputerType2_SV2_Extract(unionall_Process_2_SV2_Extract_out0_connector, outputs[0].outputFileName, false, x_outputBufSize, x_outputBufCnt, UID_SV2_Extract_out0));
        OutputerType2_SV2_Extract * outputer_SV2_Extract_out0 = outputer_SV2_Extract_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV2_Extract_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            SV2_Extract_out0 row;
            outputer_SV2_Extract_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV2_Extract_out0->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV2_Extract_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV2_Extract
#pragma region SV3_Combine_Split
#if defined(COMPILE_SV3_COMBINE_SPLIT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV2_Extract_out0,UID_HashJoin_3_FB_0>
    {
    public:
        struct KeyStruct
        {
            int m_id1;

            KeyStruct(SV2_Extract_out0 & c) :
                m_id1(c.m_id1)
            {
            }

            KeyStruct(const SV2_Extract_out0 & c, IncrementalAllocator * alloc) :
                m_id1(const_cast<SV2_Extract_out0&>(c).m_id1)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_id1(c.m_id1)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_id1(const_cast<KeyStruct&>(c).m_id1)
            {
            }

            KeyStruct() :
                m_id1(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tid1:\t" << row.m_id1 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV2_Extract_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_id1, key.m_id1)) != 0)
                return r;
            return r;
        }

        static int Compare(SV2_Extract_out0 * n1, SV2_Extract_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_id1, (*n2).m_id1)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(SV2_Extract_out0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_id1);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(SV2_Extract_out0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV1_Extract_out0,UID_HashJoin_3_FB_1>
    {
    public:
        struct KeyStruct
        {
            int m_id;

            KeyStruct(SV1_Extract_out0 & c) :
                m_id(c.m_id)
            {
            }

            KeyStruct(const SV1_Extract_out0 & c, IncrementalAllocator * alloc) :
                m_id(const_cast<SV1_Extract_out0&>(c).m_id)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_id(c.m_id)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_id(const_cast<KeyStruct&>(c).m_id)
            {
            }

            KeyStruct() :
                m_id(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tid:\t" << row.m_id << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV1_Extract_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_id, key.m_id)) != 0)
                return r;
            return r;
        }

        static int Compare(SV1_Extract_out0 * n1, SV1_Extract_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_id, (*n2).m_id)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(SV1_Extract_out0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_id);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(SV1_Extract_out0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV2_Extract_out0,UID_HashJoin_3_0>
    {
    public:
        struct KeyStruct
        {
            int m_id1;

            KeyStruct(SV2_Extract_out0 & c) :
                m_id1(c.m_id1)
            {
            }

            KeyStruct(const SV2_Extract_out0 & c, IncrementalAllocator * alloc) :
                m_id1(const_cast<SV2_Extract_out0&>(c).m_id1)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_id1(c.m_id1)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_id1(const_cast<KeyStruct&>(c).m_id1)
            {
            }

            KeyStruct() :
                m_id1(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tid1:\t" << row.m_id1 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV2_Extract_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_id1, key.m_id1)) != 0)
                return r;
            return r;
        }

        static int Compare(SV2_Extract_out0 * n1, SV2_Extract_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_id1, (*n2).m_id1)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV1_Extract_out0,UID_HashJoin_3_1>
    {
    public:
        struct KeyStruct
        {
            int m_id;

            KeyStruct(SV1_Extract_out0 & c) :
                m_id(c.m_id)
            {
            }

            KeyStruct(const SV1_Extract_out0 & c, IncrementalAllocator * alloc) :
                m_id(const_cast<SV1_Extract_out0&>(c).m_id)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_id(c.m_id)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_id(const_cast<KeyStruct&>(c).m_id)
            {
            }

            KeyStruct() :
                m_id(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tid:\t" << row.m_id << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV1_Extract_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_id, key.m_id)) != 0)
                return r;
            return r;
        }

        static int Compare(SV1_Extract_out0 * n1, SV1_Extract_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_id, (*n2).m_id)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<> 
    class CombinerPolicy<UID_HashJoin_3> 
    {
    public:
        typedef KeyComparePolicy<SV2_Extract_out0,UID_HashJoin_3_0> LeftKeyPolicy;
        typedef KeyComparePolicy<SV1_Extract_out0,UID_HashJoin_3_1> RightKeyPolicy;

        static const unsigned MaxPerKeyCrossSizeLimit = 0;

        static LONGLONG JoinerMemQuota()
        {
            return Configuration::GetGlobal().GetMaxInMemoryRowSize();
        }

        // compare key from left and right schema object
        static int Compare(const SV2_Extract_out0 * left, const SV1_Extract_out0 * right)
        {
            int r = 0;
            SV2_Extract_out0 * n1 = const_cast<SV2_Extract_out0 *>(left);
            SV1_Extract_out0 * n2 = const_cast<SV1_Extract_out0 *>(right);

            if ((r = ScopeTypeCompare((*n1).m_id1, (*n2).m_id)) != 0)
                return r;
            
            // Everything matches
            return 0;
        }

        static void CopyRow(SV2_Extract_out0 * left, SV1_Extract_out0 * right, HashJoin_3_Data0 * out)
        {
                (*out).m_maths = (*left).m_maths;
                (*out).m_science = (*left).m_science;
                (*out).m_social = (*left).m_social;
                (*out).m_tamil = (*left).m_tamil;
                (*out).m_english = (*left).m_english;
                (*out).m_name = (*right).m_name;
                (*out).m_id = (*right).m_id;
        }

        static void CopyLeftRow(SV2_Extract_out0 * left, HashJoin_3_Data0 * out)
        {
            (*out).m_maths = (*left).m_maths;
            (*out).m_science = (*left).m_science;
            (*out).m_social = (*left).m_social;
            (*out).m_tamil = (*left).m_tamil;
            (*out).m_english = (*left).m_english;
        }

        static void NullifyRightSide(HashJoin_3_Data0 * out)
        {
            (*out).m_name.SetNull();
        }

        static void CopyRightRow(SV1_Extract_out0 * right, HashJoin_3_Data0 * out)
        {
            (*out).m_name = (*right).m_name;
            (*out).m_id = (*right).m_id;
        }

        static void NullifyLeftSide(HashJoin_3_Data0 * out)
        {
        }
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<>
    class HashCombinerWithFallbackPolicy<SV2_Extract_out0, SV1_Extract_out0, HashJoin_3_Data0, UID_HashJoin_3>
    {
    public:
        static const int ProbeSorterUID = UID_HashJoin_3_FB_0;
        static const int BuildSorterUID = UID_HashJoin_3_FB_1;
        typedef StdSort<SV2_Extract_out0> ProbeSorterAlgorithm;
        typedef StdSort<SV1_Extract_out0> BuildSorterAlgorithm;
    };

    template <>
    class HashCombinerPolicyV2<SV2_Extract_out0, SV1_Extract_out0, HashJoin_3_Data0, UID_HashJoin_3>
    {
    public:
        typedef HashCombinerPolicyV2<SV2_Extract_out0, SV1_Extract_out0, HashJoin_3_Data0, UID_HashJoin_3> P;

        typedef HashCombineKey_HashJoin_3 KeySchema;
        typedef HashCombineValue_HashJoin_3 ValueSchema;

        // >> define hash & equal functions
        struct Hash
        {
            const INT64 m_seed;

            Hash() : m_seed((INT64)0) {}
            Hash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const HashCombineKey_HashJoin_3& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_id1_id);
                
                return result;
            }
        };

        struct BuildHash
        {
            const INT64 m_seed;

            BuildHash() : m_seed((INT64)0) {}
            BuildHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const SV1_Extract_out0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_id);
                
                return result;
            }
        };

        struct ProbeHash
        {
            const INT64 m_seed;

            ProbeHash() : m_seed((INT64)0) {}
            ProbeHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const SV2_Extract_out0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_id1);
                
                return result;
            }
        };

        struct EqualTo
        {
            bool operator () (const HashCombineKey_HashJoin_3& left, const HashCombineKey_HashJoin_3& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_id1_id, right.m_id1_id)) return false;
                return true;
            }
        };
        struct ProbeEqualTo
        {
            bool operator () (const SV2_Extract_out0& left, const HashCombineKey_HashJoin_3& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_id1, right.m_id1_id)) return false;
                return true;
            }
        };
        static INT64* Seed()
        {
            static INT64 seed[] { 31607, 40529 };
            return seed;
        }

        static BuildHash* BuildHashes()
        {
            static BuildHash hashes[] { BuildHash(Seed()[0]), BuildHash(Seed()[1]) };
            return hashes;
        }

        static ProbeHash* ProbeHashes()
        {
            static ProbeHash hashes[] { ProbeHash(Seed()[0]), ProbeHash(Seed()[1]) };
            return hashes;
        }

        static const size_t s_seedCnt{ 2 };

        // << define hash & equal functions

        // >> define spilling
        struct Spilling
        {
            static const size_t s_bufferSize{ 4 * 1024 * 1024 }; //4MB
            static const size_t s_bufferCnt{ 2 };
            static const bool s_disable{ false };
            static const bool s_raiseUserError{ false };
        };
        // << define spilling

        // >> define constants
        static const size_t s_memoryQuota{ 5842665468ULL }; // Cosmos default is 2GB

        // the maximum number of buckets in the hashtable is defined as 
        // s_directorySize * 2^s_segmentSizeExponent => 67 108 864
        // s_directorySize has to be a power of two
        static const size_t s_directorySize{ 4096 };
        static const size_t s_segmentSizeExponent{ 14 }; // 16384 bucket per segment

         // number of hashtables used in the join, the data is spilled  one hashtable at a time
        static const size_t s_hashtableCntExponent{ 2 }; // 4 hashtables

         // initial number of buckets per hashtable
         // s_initialSize has to be a power of two
        static const size_t s_initialSize { 128 * (1 << s_segmentSizeExponent) };

        // the length of the segment of the value list is defined as
        // 2^s_valueListSegmentSizeExponent => 1
        static const size_t s_valueListSegmentSizeExponent{ 0 };

        static const size_t s_maxPerKeyCrossSizeLimit{ 0 };
        // << define constants

        typedef STLIncrementalAllocator<char> CharAllocator;
        typedef GranularList<ValueSchema*, s_valueListSegmentSizeExponent, CharAllocator> UnderlyingValue;
        typedef UnderlyingValue Value;
        typedef Value::Iterator ValueIterator;

        template <typename Item, typename CharAllocator>
        struct HashtablePolicy : public SlimHashtableLayoutPolicy<Item, CharAllocator>::Type
        {
            struct BucketArrayTraits
            {
                static const size_t s_directorySize{ P::s_directorySize };
                static const size_t s_segmentSizeExponent{ P::s_segmentSizeExponent };
            };
        };

        typedef SlimHashMap<KeySchema, Value, HashtablePolicy, Hash, EqualTo> Hashtable;

        static const HashCombinerValuesPerKeyCountV2 s_valuesPerKeyCount = HashCombinerValuesPerKeyCountV2::MANY;

        static void UpdateValueList(CharAllocator& alloc, Value& valueList, ValueSchema* value)
        {
            valueList.EmplaceFront(alloc, value);
        }

        static ValueIterator ValueListBegin(Value& valueList)
        {
            return valueList.Begin();
        }
        
        static ValueIterator ValueListEnd(Value& valueList)
        {
            return valueList.End();
        }
        
        static size_t ValueListSize(const Value& valueList)
        {
            return valueList.Size();
        }

        static size_t IncrementValueListStats(Value& valueList)
        {
            return 0;
        }

    
        // Shallow copy probe and build schema fields to the output
        static void CopyBoth(const SV2_Extract_out0 & probe, const ValueSchema * build, HashJoin_3_Data0 & output)
        {
            // copy probe
            output.m_maths = probe.m_maths;
            output.m_science = probe.m_science;
            output.m_social = probe.m_social;
            output.m_tamil = probe.m_tamil;
            output.m_english = probe.m_english;

            // copy build
            output.m_id = scope_cast<int>(probe.m_id1);
            output.m_name = (*build).m_name;
        }

        // Shallow copy probe schema fields to the output and nullify all the rest
        static void CopyProbeAndNullifyBuild(const SV2_Extract_out0 & probe, HashJoin_3_Data0 & output)
        {
            // copy probe
            output.m_maths = probe.m_maths;
            output.m_science = probe.m_science;
            output.m_social = probe.m_social;
            output.m_tamil = probe.m_tamil;
            output.m_english = probe.m_english;

            // nullify build
            output.m_name.SetNull();
        }

         static void DeepCopyBuildRowToKeyValue(const SV1_Extract_out0 & row, KeySchema & key, ValueSchema * value, IncrementalAllocator* alloc)
         {
            // copy key
           key.m_id1_id = row.m_id;
            // copy value
            FString tmp_name(row.m_name, alloc);
            (*value).m_name = tmp_name;
         }

         static void CopyKeyValueToBuildRow(const KeySchema & key, const ValueSchema * value, SV1_Extract_out0 & row)
         {
            // copy key
           row.m_id = key.m_id1_id;
            // copy value
            row.m_name = (*value).m_name;
         }

        static void InsertOrUpdate(Hashtable& ht, const SV1_Extract_out0 & row, INT64 hash, IncrementalAllocator& alloc, CharAllocator& calloc)
        {
            KeySchema key;
            ValueSchema* value = new (alloc.Allocate(sizeof(ValueSchema))) ValueSchema();
            DeepCopyBuildRowToKeyValue(row, key, value, &alloc);

            Value vlist;
            auto it = ht.InsertWithPrecomputedHash(hash, { key, vlist });
            UpdateValueList(calloc, it.first->second, value);
        }
    };

#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class TextOutputPolicy<SV3_Combine_Split_out0, UID_Output_5>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output, SV3_Combine_Split_out0 & row)
        {
            output->Write<int,false>(row.m_id);
            output->WriteDelimiter();
            if (!row.m_name.IsNull())
            {
                output->Write<FString,true>(row.m_name);
            }
            output->WriteDelimiter();
            output->Write<int,false>(row.m_maths);
            output->WriteDelimiter();
            output->Write<int,false>(row.m_science);
            output->WriteDelimiter();
            output->Write<int,false>(row.m_social);
            output->WriteDelimiter();
            output->Write<int,false>(row.m_tamil);
            output->WriteDelimiter();
            output->Write<int,false>(row.m_english);
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output)
        {
            SCOPE_ASSERT(!"TextOutputPolicy::SerializeHeader method should not be invoked.");
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Split_4_0 [] =
    {
        "id",
        "name",
        "maths",
        "science",
        "social",
        "tamil",
        "english",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<HashJoin_3_Data0, SV3_Combine_Split_out0, UID_Split_4_0>
    {
    public:

        void Init(ManagedRow<HashJoin_3_Data0> *)
        {
            // Nothing to do
        }
        static bool FilterTransformRow(HashJoin_3_Data0 & input, SV3_Combine_Split_out0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_id = input.m_id;
                    exceptionIndex++;
                    output.m_name = input.m_name;
                    exceptionIndex++;
                    output.m_maths = input.m_maths;
                    exceptionIndex++;
                    output.m_science = input.m_science;
                    exceptionIndex++;
                    output.m_social = input.m_social;
                    exceptionIndex++;
                    output.m_tamil = input.m_tamil;
                    exceptionIndex++;
                    output.m_english = input.m_english;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Split_4_0[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Split_4_1 [] =
    {
        "(maths + science + social + tamil + english) / 5",
        "id",
        "name",
        "maths",
        "science",
        "social",
        "tamil",
        "english",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<HashJoin_3_Data0, SV3_Combine_Split_out1, UID_Split_4_1>
    {
    public:

        void Init(ManagedRow<HashJoin_3_Data0> *)
        {
            // Nothing to do
        }
        static bool FilterTransformRow(HashJoin_3_Data0 & input, SV3_Combine_Split_out1 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_total = ScopeIdiv((input.m_maths + input.m_science + input.m_social + input.m_tamil + input.m_english), 5);
                    exceptionIndex++;
                    output.m_id = input.m_id;
                    exceptionIndex++;
                    output.m_name = input.m_name;
                    exceptionIndex++;
                    output.m_maths = input.m_maths;
                    exceptionIndex++;
                    output.m_science = input.m_science;
                    exceptionIndex++;
                    output.m_social = input.m_social;
                    exceptionIndex++;
                    output.m_tamil = input.m_tamil;
                    exceptionIndex++;
                    output.m_english = input.m_english;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Split_4_1[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
    template<> 
    class SplitPolicy<typename HashJoin_3_Data0, UID_Split_4>
    {
        SIZE_T m_outputBufSize;
        int m_outputBufCnt;

        typedef SplitOutputterSentinel<HashJoin_3_Data0> SplitOutputType_Split_4_2;
        SplitOutputType_Split_4_2 splitOutputter_Split_4_2;

        typedef SplitOutputter<SplitOutputType_Split_4_2, SV3_Combine_Split_out1, BinaryOutputPolicy<SV3_Combine_Split_out1>, BinaryOutputStream, UID_Split_4_1> SplitOutputType_Split_4_1;
        SplitOutputType_Split_4_1 splitOutputter_Split_4_1;


        typedef SplitOutputter<SplitOutputType_Split_4_1, SV3_Combine_Split_out0, TextOutputPolicy<SV3_Combine_Split_out0, UID_Output_5>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput>, UID_Split_4_0> SplitOutputType_Split_4_0;
        SplitOutputType_Split_4_0 splitOutputter_Split_4_0;


    public:
        SplitPolicy(OutputFileInfo * outputFiles, SIZE_T outputBufSize, int outputBufCnt) : m_outputBufSize(outputBufSize), m_outputBufCnt(outputBufCnt),
            splitOutputter_Split_4_1(&splitOutputter_Split_4_2, outputFiles[1].outputFileName, false, outputBufSize, outputBufCnt, UID_SV3_Combine_Split_out1),
            splitOutputter_Split_4_0(&splitOutputter_Split_4_1, outputFiles[0].outputFileName, false, outputBufSize, outputBufCnt, UID_SV3_Combine_Split_out0, OutputStreamParameters(',', "\r\n", '\0', static_cast<const char*>(__nullptr), false, false, true, false, "O", UTF8, true, CharFormat_uint16))
        {
        }

        void SetSequenceNumber(int sequenceNumber)
        {
            splitOutputter_Split_4_1.SetSequenceNumber(sequenceNumber);
            splitOutputter_Split_4_0.SetSequenceNumber(sequenceNumber);
        }

        void Init()
        {
            splitOutputter_Split_4_0.Init(nullptr);
        }

        void Close()
        {
            splitOutputter_Split_4_0.Close();
        }

        void ProcessMetadata(PartitionMetadata * metadata)
        {
            splitOutputter_Split_4_0.ProcessMetadata(metadata);
        }

        void OutputHeader()
        {
            splitOutputter_Split_4_0.OutputHeader();
        }

        void ProcessRow(HashJoin_3_Data0 & input)
        {
            splitOutputter_Split_4_0.ProcessRow(input);
        }

        __declspec(noinline)
		void WriteRuntimeStats(TreeNode & root)
        {
            splitOutputter_Split_4_0.WriteRuntimeStats(root);
        }

        LONGLONG GetTotalIoWaitTime()
        {
            return splitOutputter_Split_4_0.GetTotalIoWaitTime();
        }

        // get operator resource requirements
        OperatorRequirements GetOperatorRequirements()
        {
            return splitOutputter_Split_4_0.GetOperatorRequirements()
	.AddMemoryForOutputUStreams(1, m_outputBufSize, m_outputBufCnt)
	.AddMemoryForOutputUStreams(1, Configuration::GetGlobal().GetMaxOnDiskRowSize(), m_outputBufCnt);
        }

        void FlushOutput(bool forcePersistent = false)
        {
            splitOutputter_Split_4_0.FlushOutput(forcePersistent);
        }

        void DoScopeCEPCheckpoint(BinaryOutputStream & output)
        {
            splitOutputter_Split_4_0.DoScopeCEPCheckpoint(output);
        }

        void LoadScopeCEPCheckpoint(BinaryInputStream & input)
        {
            splitOutputter_Split_4_0.LoadScopeCEPCheckpoint(input);
        }

    };

#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV3_Combine_Split_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // Define extractor type and construct object
        typedef Extractor<SV2_Extract_out0, BinaryExtractPolicy<SV2_Extract_out0>, BinaryInputStream> ExtractorType1_SV3_Combine_Split;        
        unique_ptr<ExtractorType1_SV3_Combine_Split> extractor_0_ptr= make_unique<ExtractorType1_SV3_Combine_Split>(inputs[1], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV2_Extract_out0);
        ExtractorType1_SV3_Combine_Split * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;
        // Define extractor type and construct object
        typedef Extractor<SV1_Extract_out0, BinaryExtractPolicy<SV1_Extract_out0>, BinaryInputStream> ExtractorType2_SV3_Combine_Split;        
        unique_ptr<ExtractorType2_SV3_Combine_Split> extractor_1_ptr= make_unique<ExtractorType2_SV3_Combine_Split>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV1_Extract_out0);
        ExtractorType2_SV3_Combine_Split * extractor_1 = extractor_1_ptr.get();
        ULONG extractor_1_count = 1;

        // Define the combiner operator
        typedef HashCombinerWithFallback<ExtractorType1_SV3_Combine_Split, SV2_Extract_out0, ExtractorType2_SV3_Combine_Split, SV1_Extract_out0, HashJoin_3_Data0, HashInnerJoinerV2, InnerJoiner, UID_HashJoin_3> CombinerType_HashJoin_3;
        unique_ptr<CombinerType_HashJoin_3> combiner_HashJoin_3_ptr;
        combiner_HashJoin_3_ptr.reset(new CombinerType_HashJoin_3(extractor_0, extractor_1, UID_HashJoin_3, 1));

        CombinerType_HashJoin_3 * combiner_HashJoin_3 = combiner_HashJoin_3_ptr.get();
        ULONG combiner_HashJoin_3_count = 1;
        // Define splitter type

        typedef Splitter<CombinerType_HashJoin_3, HashJoin_3_Data0, false, UID_Split_4> SplitterType_Split_4;

        // Construct operator and initialize it.
        unique_ptr<SplitterType_Split_4> splitter_Split_4_ptr (new SplitterType_Split_4(combiner_HashJoin_3, outputs, x_outputBufSize, x_outputBufCnt, UID_Split_4));
        SplitterType_Split_4 * splitter_Split_4 = splitter_Split_4_ptr.get();

        if (argv != nullptr && argc > 0)
        {
            try
            {
                int sequenceNumber = GetSequenceNumber(argv, argc);
                splitter_Split_4->SetSequenceNumber(sequenceNumber);
            }
            catch(const RuntimeException&)
            {
                // Sequence number will remain 0 in splitter_Split_4.
            }
        }

        try
        {
            // Init operator chain
            splitter_Split_4->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            HashJoin_3_Data0 row;
            splitter_Split_4->GetNextRow(row);

            // Close operator chain
            splitter_Split_4->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        splitter_Split_4->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV3_Combine_Split
#pragma region SV4_Process
#if defined(COMPILE_SV4_PROCESS) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_6 [] =
    {
        "id",
        "name",
        "maths",
        "science",
        "social",
        "tamil",
        "english",
        "total",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<SV3_Combine_Split_out1, Process_6_Data0, UID_Process_6>
    {
    public:

        static bool FilterTransformRow(SV3_Combine_Split_out1 & input, Process_6_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_id = input.m_id;
                    exceptionIndex++;
                    output.m_name = input.m_name;
                    exceptionIndex++;
                    output.m_maths = input.m_maths;
                    exceptionIndex++;
                    output.m_science = input.m_science;
                    exceptionIndex++;
                    output.m_social = input.m_social;
                    exceptionIndex++;
                    output.m_tamil = input.m_tamil;
                    exceptionIndex++;
                    output.m_english = input.m_english;
                    exceptionIndex++;
                    output.m_total = input.m_total;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Process_6[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements().AddMemoryInRows(1, 1);
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class TextOutputPolicy<Process_6_Data0, UID_SV4_Process_out0>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output, Process_6_Data0 & row)
        {
            output->Write<int,false>(row.m_id);
            output->WriteDelimiter();
            if (!row.m_name.IsNull())
            {
                output->Write<FString,true>(row.m_name);
            }
            output->WriteDelimiter();
            output->Write<int,false>(row.m_maths);
            output->WriteDelimiter();
            output->Write<int,false>(row.m_science);
            output->WriteDelimiter();
            output->Write<int,false>(row.m_social);
            output->WriteDelimiter();
            output->Write<int,false>(row.m_tamil);
            output->WriteDelimiter();
            output->Write<int,false>(row.m_english);
            output->WriteDelimiter();
            output->Write<int,false>(row.m_total);
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output)
        {
            SCOPE_ASSERT(!"TextOutputPolicy::SerializeHeader method should not be invoked.");
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV4_Process_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // Define extractor type and construct object
        typedef Extractor<SV3_Combine_Split_out1, BinaryExtractPolicy<SV3_Combine_Split_out1>, BinaryInputStream> ExtractorType1_SV4_Process;        
        unique_ptr<ExtractorType1_SV4_Process> extractor_0_ptr= make_unique<ExtractorType1_SV4_Process>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV3_Combine_Split_out1);
        ExtractorType1_SV4_Process * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<ExtractorType1_SV4_Process, SV3_Combine_Split_out1, Process_6_Data0, UID_Process_6> FilterTransformerType_Process_6;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_6> filterTransformer_Process_6_ptr (new FilterTransformerType_Process_6(extractor_0, UID_Process_6));
        FilterTransformerType_Process_6 * filterTransformer_Process_6 = filterTransformer_Process_6_ptr.get();
        ULONG filterTransformer_Process_6_count = 1;
        // Define outputer type
        typedef Outputer<FilterTransformerType_Process_6, Process_6_Data0, TextOutputPolicy<Process_6_Data0, UID_SV4_Process_out0>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput>, false> OutputerType2_SV4_Process;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV4_Process> outputer_SV4_Process_out0_ptr(new OutputerType2_SV4_Process(filterTransformer_Process_6, outputs[0].outputFileName, false, x_outputBufSize, x_outputBufCnt, OutputStreamParameters(',', "\r\n", '\0', static_cast<const char*>(__nullptr), false, false, true, false, "O", UTF8, true, CharFormat_uint16), UID_SV4_Process_out0));
        OutputerType2_SV4_Process * outputer_SV4_Process_out0 = outputer_SV4_Process_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV4_Process_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_6_Data0 row;
            outputer_SV4_Process_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV4_Process_out0->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV4_Process_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV4_Process
#pragma region SV5_Process
#if defined(COMPILE_SV5_PROCESS) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV3_Combine_Split_out1,UID_Process_8>
    {
    public:
        struct KeyStruct
        {
            int m_total;

            KeyStruct(SV3_Combine_Split_out1 & c) :
                m_total(c.m_total)
            {
            }

            KeyStruct(const SV3_Combine_Split_out1 & c, IncrementalAllocator * alloc) :
                m_total(const_cast<SV3_Combine_Split_out1&>(c).m_total)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_total(c.m_total)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_total(const_cast<KeyStruct&>(c).m_total)
            {
            }

            KeyStruct() :
                m_total(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\ttotal:\t" << row.m_total << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV3_Combine_Split_out1 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_total, key.m_total)) != 0)
                return -r;
            return r;
        }

        static int Compare(SV3_Combine_Split_out1 * n1, SV3_Combine_Split_out1 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_total, (*n2).m_total)) != 0)
                return -r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(SV3_Combine_Split_out1 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return -(__int64)((*p).m_total);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(SV3_Combine_Split_out1 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV3_Combine_Split_out1,UID_Process_9_0>
    {
    public:
        struct KeyStruct
        {

            KeyStruct(SV3_Combine_Split_out1 & c) 

            {
            }

            KeyStruct(const SV3_Combine_Split_out1 & c, IncrementalAllocator * alloc) 

            {
            }

            KeyStruct(KeyStruct & c) 

            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) 

            {
            }

            KeyStruct() 

            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV3_Combine_Split_out1 & row, KeyType & key)
        {
            int r = 0;
            return r;
        }

        static int Compare(SV3_Combine_Split_out1 * n1, SV3_Combine_Split_out1 * n2)
        {
            int r = 0;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV3_Combine_Split_out1,UID_Process_9_1>
    {
    public:
        struct KeyStruct
        {
            int m_total;

            KeyStruct(SV3_Combine_Split_out1 & c) :
                m_total(c.m_total)
            {
            }

            KeyStruct(const SV3_Combine_Split_out1 & c, IncrementalAllocator * alloc) :
                m_total(const_cast<SV3_Combine_Split_out1&>(c).m_total)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_total(c.m_total)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_total(const_cast<KeyStruct&>(c).m_total)
            {
            }

            KeyStruct() :
                m_total(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\ttotal:\t" << row.m_total << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV3_Combine_Split_out1 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_total, key.m_total)) != 0)
                return -r;
            return r;
        }

        static int Compare(SV3_Combine_Split_out1 * n1, SV3_Combine_Split_out1 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_total, (*n2).m_total)) != 0)
                return -r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<SV3_Combine_Split_out1, Process_9_Data0, UID_Process_9>
    {
    public:

        static bool FilterTransformRow(SV3_Combine_Split_out1 & input, Process_9_Data0 & output, IncrementalAllocator * alloc)
        {
}

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class SequenceProjectPolicy<typename SV3_Combine_Split_out1, typename Process_9_Data0, UID_Process_9> 
    {
    public:
        typedef KeyComparePolicy<SV3_Combine_Split_out1, UID_Process_9_0> GroupKeyPolicy;
        typedef KeyComparePolicy<SV3_Combine_Split_out1, UID_Process_9_1> ValueKeyPolicy;

        void SetVertexID(__int64 vertexID)
        {
            m_vertexID = vertexID;
        }

        // Advance all sequence functions to the next row, and copy their values to the output.
        //
        void AdvanceAndOutput(bool isNewGroup, bool isNewOrder, Process_9_Data0 &output, SV3_Combine_Split_out1 &input)
        {
                output.m_rank = _function0.Step(isNewGroup, isNewOrder);
                output.m_id = input.m_id;
                output.m_name = input.m_name;
                output.m_maths = input.m_maths;
                output.m_science = input.m_science;
                output.m_social = input.m_social;
                output.m_tamil = input.m_tamil;
                output.m_english = input.m_english;
                output.m_total = input.m_total;
        }

    private:
        __int64 m_vertexID;
            SequenceFunction_RANK _function0;
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_10 [] =
    {
        "id",
        "name",
        "maths",
        "science",
        "social",
        "tamil",
        "english",
        "total",
        "rank",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Process_9_Data0, Process_10_Data0, UID_Process_10>
    {
    public:

        static bool FilterTransformRow(Process_9_Data0 & input, Process_10_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_id = input.m_id;
                    exceptionIndex++;
                    output.m_name = input.m_name;
                    exceptionIndex++;
                    output.m_maths = input.m_maths;
                    exceptionIndex++;
                    output.m_science = input.m_science;
                    exceptionIndex++;
                    output.m_social = input.m_social;
                    exceptionIndex++;
                    output.m_tamil = input.m_tamil;
                    exceptionIndex++;
                    output.m_english = input.m_english;
                    exceptionIndex++;
                    output.m_total = input.m_total;
                    exceptionIndex++;
                    output.m_rank = input.m_rank;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Process_10[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements().AddMemoryInRows(1, 1);
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class TextOutputPolicy<Process_10_Data0, UID_SV5_Process_out0>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output, Process_10_Data0 & row)
        {
            output->Write<int,false>(row.m_id);
            output->WriteDelimiter();
            if (!row.m_name.IsNull())
            {
                output->Write<FString,true>(row.m_name);
            }
            output->WriteDelimiter();
            output->Write<int,false>(row.m_maths);
            output->WriteDelimiter();
            output->Write<int,false>(row.m_science);
            output->WriteDelimiter();
            output->Write<int,false>(row.m_social);
            output->WriteDelimiter();
            output->Write<int,false>(row.m_tamil);
            output->WriteDelimiter();
            output->Write<int,false>(row.m_english);
            output->WriteDelimiter();
            output->Write<int,false>(row.m_total);
            output->WriteDelimiter();
            if (!row.m_rank.IsNull())
            {
                output->Write<__int64,false>(row.m_rank);
            }
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output)
        {
            SCOPE_ASSERT(!"TextOutputPolicy::SerializeHeader method should not be invoked.");
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV5_Process_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // Define extractor type and construct object
        typedef Extractor<SV3_Combine_Split_out1, BinaryExtractPolicy<SV3_Combine_Split_out1>, BinaryInputStream> ExtractorType1_SV5_Process;        
        unique_ptr<ExtractorType1_SV5_Process> extractor_0_ptr= make_unique<ExtractorType1_SV5_Process>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV3_Combine_Split_out1);
        ExtractorType1_SV5_Process * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<SV3_Combine_Split_out1>> delegate_extractor_0_ptr (new OperatorDelegate<SV3_Combine_Split_out1>(OperatorDelegate<SV3_Combine_Split_out1>::FromOperator(extractor_0)));
        OperatorDelegate<SV3_Combine_Split_out1> * delegate_extractor_0 = delegate_extractor_0_ptr.get();
        ULONG delegate_extractor_0_count = 1;
        // Define sorter type
        typedef Sorter<SV3_Combine_Split_out1> SorterType_Process_8;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_8> sorter_Process_8_ptr (new SorterType_Process_8(delegate_extractor_0, &StdSort<SV3_Combine_Split_out1>::Sort<KeyComparePolicy<SV3_Combine_Split_out1, UID_Process_8>, (sizeof(SV3_Combine_Split_out1)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<SV3_Combine_Split_out1>::CreateDelegate<UID_Process_8>(), false, 5842665469 /*memoryQuota*/, UID_Process_8));
        SorterType_Process_8 * sorter_Process_8 = sorter_Process_8_ptr.get();
        ULONG sorter_Process_8_count = 1;
        // Define the type of the operator
        typedef SequenceProject<SorterType_Process_8, SV3_Combine_Split_out1, Process_9_Data0, UID_Process_9> SequenceProjectType_Process_9;
        // Construct operator and initialize it.
        unique_ptr<SequenceProjectType_Process_9> sequence_project_Process_9_ptr (new SequenceProjectType_Process_9(sorter_Process_8, UID_Process_9));
        SequenceProjectType_Process_9 * sequence_project_Process_9 = sequence_project_Process_9_ptr.get();
        ULONG sequence_project_Process_9_count = 1;
        __int64 sequence_project_vertexID_Process_9 = vertexExecutionInfo->m_vertexId;
        sequence_project_Process_9->SetVertexID(sequence_project_vertexID_Process_9);
        // Define the type of the operator
        typedef FilterTransformer<SequenceProjectType_Process_9, Process_9_Data0, Process_10_Data0, UID_Process_10> FilterTransformerType_Process_10;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_10> filterTransformer_Process_10_ptr (new FilterTransformerType_Process_10(sequence_project_Process_9, UID_Process_10));
        FilterTransformerType_Process_10 * filterTransformer_Process_10 = filterTransformer_Process_10_ptr.get();
        ULONG filterTransformer_Process_10_count = 1;
        // Define outputer type
        typedef Outputer<FilterTransformerType_Process_10, Process_10_Data0, TextOutputPolicy<Process_10_Data0, UID_SV5_Process_out0>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput>, false> OutputerType2_SV5_Process;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV5_Process> outputer_SV5_Process_out0_ptr(new OutputerType2_SV5_Process(filterTransformer_Process_10, outputs[0].outputFileName, false, x_outputBufSize, x_outputBufCnt, OutputStreamParameters(',', "\r\n", '\0', static_cast<const char*>(__nullptr), false, false, true, false, "O", UTF8, true, CharFormat_uint16), UID_SV5_Process_out0));
        OutputerType2_SV5_Process * outputer_SV5_Process_out0 = outputer_SV5_Process_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV5_Process_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_10_Data0 row;
            outputer_SV5_Process_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV5_Process_out0->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV5_Process_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV5_Process
// Empty footer

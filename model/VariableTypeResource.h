/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * VariableTypeResource.h
 *
 * 
 */

#ifndef VariableTypeResource_H_
#define VariableTypeResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  VariableTypeResource
    : public ModelBase
{
public:
    VariableTypeResource();
    virtual ~VariableTypeResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// VariableTypeResource members

    /// <summary>
    /// The base class of the type
    /// </summary>
    utility::string_t getBase() const;
        void setBase(utility::string_t value);
    /// <summary>
    /// Whether the type comes from a set of valid values that the system can provided (such as users)
    /// </summary>
    bool getEnumerable() const;
    bool enumerableIsSet() const;
    void unsetEnumerable();
    void setEnumerable(bool value);
    /// <summary>
    /// The name of the variable type. Used as the unique id
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);

protected:
    utility::string_t m_Base;
        bool m_Enumerable;
    bool m_EnumerableIsSet;
    utility::string_t m_Name;
    };

}
}
}
}

#endif /* VariableTypeResource_H_ */

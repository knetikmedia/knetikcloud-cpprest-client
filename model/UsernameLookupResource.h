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
 * UsernameLookupResource.h
 *
 * 
 */

#ifndef UsernameLookupResource_H_
#define UsernameLookupResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "ExpressionResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  UsernameLookupResource
    : public ModelBase
{
public:
    UsernameLookupResource();
    virtual ~UsernameLookupResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UsernameLookupResource members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ExpressionResource> getLookupKey() const;
    bool lookupKeyIsSet() const;
    void unsetLookup_key();
    void setLookupKey(std::shared_ptr<ExpressionResource> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();
    void setType(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getValueType() const;
    bool valueTypeIsSet() const;
    void unsetValue_type();
    void setValueType(utility::string_t value);

protected:
    std::shared_ptr<ExpressionResource> m_Lookup_key;
    bool m_Lookup_keyIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
    utility::string_t m_Value_type;
    bool m_Value_typeIsSet;
};

}
}
}
}

#endif /* UsernameLookupResource_H_ */

/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * ConfigLookupResource.h
 *
 * 
 */

#ifndef ConfigLookupResource_H_
#define ConfigLookupResource_H_


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
class  ConfigLookupResource
    : public ModelBase
{
public:
    ConfigLookupResource();
    virtual ~ConfigLookupResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ConfigLookupResource members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ExpressionResource> getLookupKey() const;
    void setLookupKey(std::shared_ptr<ExpressionResource> value);
    bool lookup_keyIsSet() const;
    void unsetLookup_key();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
    void setType(utility::string_t value);
    bool typeIsSet() const;
    void unsetType();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getValueType() const;
    void setValueType(utility::string_t value);
    bool value_typeIsSet() const;
    void unsetValue_type();

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

#endif /* ConfigLookupResource_H_ */

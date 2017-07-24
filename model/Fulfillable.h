/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * Fulfillable.h
 *
 * 
 */

#ifndef Fulfillable_H_
#define Fulfillable_H_


#include "Behavior.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Fulfillable
    : public Behavior
{
public:
    Fulfillable();
    virtual ~Fulfillable();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Fulfillable members

    /// <summary>
    /// The name of the fulfillment type that describes how the item should be fulfilled.  Examples: inventory, wallet, amazon
    /// </summary>
    utility::string_t getTypeName() const;
        void setTypeName(utility::string_t value);

protected:
    utility::string_t m_Type_name;
    };

}
}
}
}

#endif /* Fulfillable_H_ */

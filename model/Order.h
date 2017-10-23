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
 * Order.h
 *
 * 
 */

#ifndef Order_H_
#define Order_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Order
    : public ModelBase
{
public:
    Order();
    virtual ~Order();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Order members

    /// <summary>
    /// 
    /// </summary>
    bool getAscending() const;
    bool ascendingIsSet() const;
    void unsetAscending();
    void setAscending(bool value);
    /// <summary>
    /// 
    /// </summary>
    bool getDescending() const;
    bool descendingIsSet() const;
    void unsetDescending();
    void setDescending(bool value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDirection() const;
    bool directionIsSet() const;
    void unsetDirection();
    void setDirection(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    bool getIgnoreCase() const;
    bool ignoreCaseIsSet() const;
    void unsetIgnore_case();
    void setIgnoreCase(bool value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getNullHandling() const;
    bool nullHandlingIsSet() const;
    void unsetNull_handling();
    void setNullHandling(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getProperty() const;
    bool propertyIsSet() const;
    void unsetProperty();
    void setProperty(utility::string_t value);

protected:
    bool m_Ascending;
    bool m_AscendingIsSet;
    bool m_Descending;
    bool m_DescendingIsSet;
    utility::string_t m_Direction;
    bool m_DirectionIsSet;
    bool m_Ignore_case;
    bool m_Ignore_caseIsSet;
    utility::string_t m_Null_handling;
    bool m_Null_handlingIsSet;
    utility::string_t m_Property;
    bool m_PropertyIsSet;
};

}
}
}
}

#endif /* Order_H_ */

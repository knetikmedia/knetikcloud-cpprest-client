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
 * PageResource«BreEventLog».h
 *
 * 
 */

#ifndef PageResource«BreEventLog»_H_
#define PageResource«BreEventLog»_H_


#include "ModelBase.h"

#include "Order.h"
#include "BreEventLog.h"
#include <vector>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  PageResource«BreEventLog»
    : public ModelBase
{
public:
    PageResource«BreEventLog»();
    virtual ~PageResource«BreEventLog»();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PageResource«BreEventLog» members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BreEventLog>>& getContent();
    bool contentIsSet() const;
    void unsetContent();
    /// <summary>
    /// 
    /// </summary>
    bool getFirst() const;
    void setFirst(bool value);
    bool firstIsSet() const;
    void unsetFirst();
    /// <summary>
    /// 
    /// </summary>
    bool getLast() const;
    void setLast(bool value);
    bool lastIsSet() const;
    void unsetLast();
    /// <summary>
    /// 
    /// </summary>
    int32_t getNumber() const;
    void setNumber(int32_t value);
    bool numberIsSet() const;
    void unsetNumber();
    /// <summary>
    /// 
    /// </summary>
    int32_t getNumberOfElements() const;
    void setNumberOfElements(int32_t value);
    bool number_of_elementsIsSet() const;
    void unsetNumber_of_elements();
    /// <summary>
    /// 
    /// </summary>
    int32_t getSize() const;
    void setSize(int32_t value);
    bool sizeIsSet() const;
    void unsetSize();
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Order>>& getSort();
    bool sortIsSet() const;
    void unsetSort();
    /// <summary>
    /// 
    /// </summary>
    int64_t getTotalElements() const;
    void setTotalElements(int64_t value);
    bool total_elementsIsSet() const;
    void unsetTotal_elements();
    /// <summary>
    /// 
    /// </summary>
    int32_t getTotalPages() const;
    void setTotalPages(int32_t value);
    bool total_pagesIsSet() const;
    void unsetTotal_pages();

protected:
    std::vector<std::shared_ptr<BreEventLog>> m_Content;
    bool m_ContentIsSet;
bool m_First;
    bool m_FirstIsSet;
bool m_Last;
    bool m_LastIsSet;
int32_t m_Number;
    bool m_NumberIsSet;
int32_t m_Number_of_elements;
    bool m_Number_of_elementsIsSet;
int32_t m_Size;
    bool m_SizeIsSet;
std::vector<std::shared_ptr<Order>> m_Sort;
    bool m_SortIsSet;
int64_t m_Total_elements;
    bool m_Total_elementsIsSet;
int32_t m_Total_pages;
    bool m_Total_pagesIsSet;
};

}
}
}
}

#endif /* PageResource«BreEventLog»_H_ */

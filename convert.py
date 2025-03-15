# pip install pypdf2
import PyPDF2
import os

def pdf_to_text(pdf_path, output_path=None):
    """
    Convert a PDF file to a text file.
    
    Args:
        pdf_path (str): Path to the PDF file
        output_path (str, optional): Path for the output text file.
                                     If None, will use the same name as PDF but with .txt extension
    
    Returns:
        str: Path to the created text file
    """
    if output_path is None:
        # Create output path with same name but .txt extension
        output_path = os.path.splitext(pdf_path)[0] + '.txt'
    
    try:
        # Open the PDF file in binary mode
        with open(pdf_path, 'rb') as pdf_file:
            # Create a PDF reader object
            reader = PyPDF2.PdfReader(pdf_file)
            
            # Get total number of pages
            num_pages = len(reader.pages)
            
            # Open text file for writing
            with open(output_path, 'w', encoding='utf-8') as txt_file:
                # Process each page
                for page_num in range(num_pages):
                    page = reader.pages[page_num]
                    text = page.extract_text()
                    txt_file.write(text + '\n\n')
                    
            print(f"Conversion complete! Text saved to: {output_path}")
            return output_path
        
    except Exception as e:
        print(f"Error converting PDF: {e}")
        return None

# Example usage
if __name__ == "__main__":
    pdf_path = input("Enter the path to your PDF file: ")
    pdf_to_text(pdf_path)